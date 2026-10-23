#include "ft_malcolm.h"

int	mac_control(char* s)
{
	int i = -1;
	int j;
	char** ss;
	
	if(ft_symbol_cnt(s, ':') != 5)
		return 0;
	ss = ft_split(s, ':');
	if(ft_sstrlen(ss) != 6)
	{
		ft_leak_cleaner(ss);
		return 0;
	}
	while(ss[++i])
	{
		j = -1;
		if(ft_strlen(ss[i]) != 2)
		{
			ft_leak_cleaner(ss);
			return 0;
		}
		while(ss[i][++j])
		{
			if((ft_isdigit(ss[i][j]) == 0) && \
			   !(ss[i][j] >= 'a' && ss[i][j] <= 'f') && \
			   !(ss[i][j] >= 'A' && ss[i][j] <= 'F'))
			{
				ft_leak_cleaner(ss);
				return 0;				
			}
		}
	}
	ft_leak_cleaner(ss);
	return 1;
}

int	ip_control(char* s)
{
	int i = -1;
	int j;
	char** ss;

	if(ft_symbol_cnt(s, '.') != 3)
		return 0;
	ss = ft_split(s, '.');
	if(ft_sstrlen(ss) != 4)
	{
		ft_leak_cleaner(ss);
		return 0;
	}
	while(ss[++i])
	{
		j = -1;	
		if(ft_strlen(ss[i]) > 3)
		{
			ft_leak_cleaner(ss);
			return 0;
		}
		while(ss[i][++j])
		{
			if(ft_isdigit(ss[i][j]) == 0)
			{
				ft_leak_cleaner(ss);
				return 0;
			}
		}
		j = ft_atoi(ss[i]);
		if((int)ft_strlen(ss[i]) != ft_nbr_idx_cnt(j))
		{
			ft_leak_cleaner(ss);
			return 0;
		}
		if(j < 0 || j > 255)
		{
			ft_leak_cleaner(ss);
			return 0;
		}
	}
	ft_leak_cleaner(ss);
	return 1;
}

int	ordormat_control(char** str)
{
	for(int i = 1; i < 5; i++)
	{
		if(i % 2 == 1)
		{
			if(ip_control(str[i]) == 0)
			{
				printf("IP Format Error!\n");
				return 0;
			}
		}
		else
		{
			if(mac_control(str[i]) == 0)
			{
				printf("MAC Format Error!\n");
				return 0;
			}
		}
	}
	return 1;
}

void	take_args(char **avs)
{
	args.src_ip = ft_strdup(avs[1]);
	args.src_mac = ft_strdup(avs[2]);
	args.tgt_ip = ft_strdup(avs[3]);
	args.tgt_mac = ft_strdup(avs[4]);
}

int 	free_args(void)
{
	free(args.src_ip);
	free(args.src_mac);
	free(args.tgt_ip);
	free(args.tgt_mac);
	free(args.iface_name);
	return 0;
}