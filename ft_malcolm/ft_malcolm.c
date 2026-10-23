#include "ft_malcolm.h"

t_args args;

int main(int ac, char** av)
{
	etharp 	arp_f;

	if(ac != 5) {printf("Wrong Argument Count!\n"); return 1;}
	if(ordormat_control(av) == 0)
	{printf("Usage: ./ft_malcolm <source_ipv4> <source_mac> <target_ipv4> <target_mac>\n"); return 1;}
	if(signal(SIGINT, ctrl_c) == SIG_ERR) {printf("Signal error: %s\n", strerror(errno)); return 1;}
	take_args(av);
	if(find_iface()) {free(args.src_ip); free(args.src_mac); free(args.tgt_ip); free(args.tgt_mac); return 1;}
	if(args.iface_name == NULL) 
	{printf("No network interface found for target IP! (%s)\n", args.tgt_ip);
	free(args.src_ip); free(args.src_mac); free(args.tgt_ip); free(args.tgt_mac); return 1;}
	args.sockfd = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ARP));
	if(args.sockfd < 0) {printf("Socket error: %s\n", strerror(errno)); free_args(); return 1;}
	if(wait_and_get_arp_req_pack(&arp_f))
	{free_args(); if(close(args.sockfd) < 0) {printf("Close socket error: %s\n", strerror(errno)); return 1;} return 1;}
	if(arp_rep_packject(&arp_f))
	{free_args(); if(close(args.sockfd) < 0) {printf("Close socket error: %s\n", strerror(errno)); return 1;} return 1;}
	free_args();
	if(close(args.sockfd) < 0) {printf("Close socket error: %s\n", strerror(errno)); return 1;}
	return 0;
}