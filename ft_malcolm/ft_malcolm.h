#ifndef FT_MALCOLM_H
# define FT_MALCOLM_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <signal.h>
# include <errno.h>
# include <sys/socket.h> 		// socket, sendto, recvfrom, setsockopt
# include <arpa/inet.h>  		// inet_pton, inet_ntop, inet_addr, htons, ntohs
# include <netdb.h>      		// getaddrinfo, freeaddrinfo, gethostbyname, gai_strerror
# include <net/if.h>     		// if_nametoindex
# include <ifaddrs.h>    		// getifaddrs, freeifaddrs
# include <net/ethernet.h> 		// for struct ether_header etc. 
# include <linux/if_packet.h>	// for struct sockaddr_ll etc.
# include <netinet/if_ether.h>  // for struct ether_arp etc.

typedef struct s_args
{
	char* src_ip;
	char* src_mac;
	char* tgt_ip;
	char* tgt_mac;
}	t_args;

typedef struct etharp_frame
{
	struct ether_header eth_hdr;
	struct ether_arp arp_hdr;
}	etharp;

extern t_args args;

int		ft_sstrlen(char**);
void	ft_leak_cleaner(char**);

// arguman funcs
int		ft_nbr_idx_cnt(int);
int		ip_control(char*);
int		mac_control(char*);
int		ft_symbol_cnt(char*, char);
int		ordormat_control(char**);
void	take_args(char **);

// net funcs
int 	create_raw_socket(void);
void	find_iface(char **);
char*	ft_mac_ntoa(uint8_t *);
int 	arp_req_unpacksniff(char *, etharp *);
int 	wait_and_get_arp_req_pack(int, etharp *); // sniffer

#endif
