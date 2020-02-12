#include "libft.h"

void	ft_putnbr(int n)
{
	long long nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10 + '0');
		ft_putnbr(nbr % 10 + '0');
	}
	else 
		ft_putchar(nbr + '0');
}
