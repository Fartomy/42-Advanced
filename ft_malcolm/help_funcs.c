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
