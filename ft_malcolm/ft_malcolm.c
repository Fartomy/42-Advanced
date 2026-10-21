#include "ft_malcolm.h"

t_args args;

int main(int ac, char** av)
{
	int sockfd;
	char *iface_name;
	etharp arp_f;

	if(ac != 5) {printf("Wrong Argument Count!\n"); return 1;}
	if(ordormat_control(av) == 0)
	{
		printf("Usage: ./ft_malcolm <source_ipv4> <source_mac> <target_ipv4> <target_mac>\n");
		return 1;
	}
	take_args(av);
	find_iface(&iface_name);
	if(iface_name == NULL) {printf("No network interface found for target IP! (%s)\n", args.tgt_ip); return 1;}
	sockfd = create_raw_socket();
	if(sockfd < 0) {printf("Socket error: %s\n", strerror(errno)); return 1;}
	if(wait_and_get_arp_req_pack(sockfd, &arp_f)) {return 1;}

	return 0;
}