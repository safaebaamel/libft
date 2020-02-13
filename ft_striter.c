#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL || f == NULL)
		return (NULL);
	while (s && f)
	{
		f(s++);
	}
}
