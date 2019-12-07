#include <string.h>

void	ft_bzero(char *s,size_t n)
{
	size_t i;

	i = 0;
	while (i <= n)
	{
		s[i] = 0;
		i++;
	}
}
