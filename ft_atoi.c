#include "libft.h"

int	ft_atoi(char *str)
{
	int i;
	int r;
	int negative;

	r = 0;
	negative = 1;
	i = 0;
	while (str[i] < 33)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			negative *= -1;
		}
       		else negative *= 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
			i++;
	}
	return (r *negative);
}
