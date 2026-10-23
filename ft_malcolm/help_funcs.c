#include "ft_malcolm.h"

int	ft_sstrlen(char **s)
{
	int i = 0;

	while(s[i])
		i++;
	return i;
}

int	ft_nbr_idx_cnt(int nbr)
{
	int c = 0;

	if(nbr == 0)
		return 1;
	while(nbr)
	{
		nbr /= 10;
		c++;
	}
	return c;
}

int	ft_symbol_cnt(char *s, char ch)
{
	int c = 0;
	int i = -1;

	while(s[++i])
	{
		if(s[i] == ch)
			c++;
	}
	return c;
}

void	ft_leak_cleaner(char** v)
{
	int i = -1;
	while(v[++i])
		free(v[i]);
	free(v);
}

void	ft_exit(void)
{
	asm("mov $60, %rax\n"
	 	"mov $0, %rdi\n" 
	 	"syscall");
}

void	ctrl_c(int sig)
{
	if(sig == SIGINT)
	{
		printf("\nExiting program...\n");
		free_args();
		close(args.sockfd);
		sleep(1);
		ft_exit();
	}
}