#include "libft.h"
#include <stdio.h>
int	ft_startswith(char *str, char *target, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (str[i] == target[i])
		{
			i++;
			return 1;
		}else
			return 0;
	}
	return 0;
}

int	main(void)
{
	printf("%d",(ft_startswith("safae is happy", "safa", 5)));
}
