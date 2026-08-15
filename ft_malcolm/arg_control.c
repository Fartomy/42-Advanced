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
		return 0;
	while(ss[++i])
	{
		j = -1;
		if(ft_strlen(ss[i]) != 2)
			return 0;
		while(ss[i][++j])
		{
			if((ft_isdigit(ss[i][j]) == 0) && \
			   !(ss[i][j] >= 'a' && ss[i][j] <= 'f') && \
			   !(ss[i][j] >= 'A' && ss[i][j] <= 'F'))
				return 0;
		}
	}
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
		return 0;
	while(ss[++i])
	{
		j = -1;	
		if(ft_strlen(ss[i]) > 3)
			return 0;
		while(ss[i][++j])
		{
			if(ft_isdigit(ss[i][j]) == 0)
				return 0;
		}
		j = ft_atoi(ss[i]);
		if((int)ft_strlen(ss[i]) != ft_nbr_idx_cnt(j))
			return 0;
		if(j < 0 || j > 255)
			return 0;
	}
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
