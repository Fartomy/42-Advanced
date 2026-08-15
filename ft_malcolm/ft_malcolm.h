#ifndef FT_MALCOLM_H
# define FT_MALCOLM_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <signal.h>
# include <sys/socket.h> // socket, sendto, recvfrom, setsockopt
# include <arpa/inet.h>  // inet_pton, inet_ntop, inet_addr, htons, ntohs
# include <netdb.h>      // getaddrinfo, freeaddrinfo, gethostbyname, gai_strerror
# include <net/if.h>     // if_nametoindex
# include <ifaddrs.h>    // getifaddrs, freeifaddrs

int	ft_sstrlen(char**);
int	ft_nbr_idx_cnt(int);
int	ip_control(char*);
int	mac_control(char*);
int	ft_symbol_cnt(char*, char);
int	ordormat_control(char**);

typedef struct s_args
{
	char* src_ip;
	char* src_mac;
	char* tgt_ip;
	char* tgt_mac;
}	t_args;

extern t_args g_args;

#endif
