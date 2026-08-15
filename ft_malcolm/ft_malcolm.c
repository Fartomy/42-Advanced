#include "ft_malcolm.h"

t_args g_args;

int main(int ac, char** av)
{
	(void)g_args;
	if(ac != 5)
	{
		printf("Wrong Argument Count!\n");
		return 1;
	}
	if(ordormat_control(av) == 0)
	{
		printf("Usage: ./ft_malcolm <source_ipv4> <source_mac> <target_ipv4> <target_mac> \n");
		return 1;
	}
	return 0;
}
