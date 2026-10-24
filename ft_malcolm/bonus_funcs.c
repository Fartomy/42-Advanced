#include "ft_malcolm.h"

void	bonus_get_key(void)
{
	printf("Type 'V' for Verbose Mode or keep continue type any and press ENTER...\n>_ ");
	scanf("%c", &args.b_verb_key);
}

int 	bonus_uid_control(void)
{
	uid_t uid;

	uid = getuid();
	if(uid > 0)
		return 0;
	return 1;
}

void	bonus_verbose_mode(etharp *arp_frm)
{
	printf("\033[33mEthernet Header:\n");
	printf("\tDestination MAC: ");
	for(int i = 0; i < 6; i++)
		printf("%02x:", arp_frm->eth_hdr.ether_dhost[i]);
	printf("\b \b\n\tSource MAC: ");
	for(int i = 0; i < 6; i++)
		printf("%02x:", arp_frm->eth_hdr.ether_shost[i]);
	printf("\b \b\n\tEthertype: 0x0%02x (ARP)\033[0m", ntohs(arp_frm->eth_hdr.ether_type));
	printf("\n\033[35mARP Header:\n");
	printf("\tHardware type: %d (Ethernet)\n\tProtocol type: 0x0%02x (IPv4)\n\tMAC length: %d\n\tIP length: %d\n\tOperation code: %d (REQUEST)\n", \
	ntohs(arp_frm->arp_hdr.ea_hdr.ar_hrd), ntohs(arp_frm->arp_hdr.ea_hdr.ar_pro), arp_frm->arp_hdr.ea_hdr.ar_hln, \
	arp_frm->arp_hdr.ea_hdr.ar_pln, ntohs(arp_frm->arp_hdr.ea_hdr.ar_op));
	printf("\tSender MAC: ");
	for(int i = 0; i < 6; i++)
		printf("%02x:", arp_frm->arp_hdr.arp_sha[i]);
	printf("\b \b\n\tSender IP: ");
	for(int i = 0; i < 4; i++)
		printf("%d.", arp_frm->arp_hdr.arp_spa[i]);
	printf("\b \b\n\tTarget MAC: ");
	for(int i = 0; i < 6; i++)
		printf("%02x:", arp_frm->arp_hdr.arp_tha[i]);
	printf("\b \b\n\tTarget IP: ");
	for(int i = 0; i < 4; i++)
		printf("%d.", arp_frm->arp_hdr.arp_tpa[i]);
	printf("\b \b\n\033[0m");
}