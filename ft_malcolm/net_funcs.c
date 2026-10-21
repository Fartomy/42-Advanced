#include "ft_malcolm.h"

int 	create_raw_socket(void)
{
	int sockfd = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ARP));
	return sockfd;
}

void	find_iface(char **s)
{
	struct ifaddrs *intf;
	uint32_t ip, netmask;
	uint32_t netaddr, tgt_netaddr;

	getifaddrs(&intf);
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
				*s = ft_strdup(ifa->ifa_name);
				printf("Found available interface: %s\n", *s);
				break;
			}
		}
	}
	freeifaddrs(intf);
}

char*	ft_mac_ntoa(uint8_t *mac)
{
	char*	mac_str = malloc(sizeof(char) * 18);

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
	inet_pton(AF_INET, args.tgt_ip, target_ip_bin);
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

int 	wait_and_get_arp_req_pack(int sock, etharp *arp_frm) // sniffer
{
	struct sockaddr_ll sll;
	socklen_t sll_len;
	char buff[2048];
	int len;

	sll_len = sizeof(sll);
	ft_memset(&sll, 0, sizeof(sll));
	while(1)
	{
		len = recvfrom(sock, buff, sizeof(buff), 0, (struct sockaddr *)&sll, &sll_len);
		if(len < 0) {printf("Receive error: %s\n", strerror(errno)); return 1;}
		if(arp_req_unpacksniff(buff, arp_frm))
		{
			printf("an ARP request sniffed.\n");
			printf("	MAC address of request: ");
			for(int i = 0; i < 6; i++)
				printf("%02x ", arp_frm->arp_hdr.arp_sha[i]);
			printf("\n	IPv4 address of request: ");
			for(int i = 0; i < 4; i++)
		 		printf("%d ", arp_frm->arp_hdr.arp_spa[i]);
		 	printf("\n");
			break;
		}
	}
	return 0;
}