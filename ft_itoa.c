#include "libft.h"

int	length(int nbr)
{
	int i;

	i = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		++i;
	}
	return (i);
}

int	ft_abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

char	*ft_itoa(int nbr)
{
	char *arr;
	int len;
	int sign;
	int value;

	len = length(nbr);
	len += nbr < 0 ? 1 : 0;
	if (!(arr =(char *) malloc(sizeof(char) * (len + 1))))
		return (0);
	arr[len] = '\0';
	value = nbr;
	while (nbr != 0)
	{
		--len;
		arr[len] = ft_abs(nbr % 10) + '0';
		nbr = ft_abs(nbr / 10);
	}
	nbr = value;
	sign = (nbr < 0) ? -1 : 1;
	if (sign == -1)
		arr[0] = '-';
	return (arr);
}
