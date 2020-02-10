#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c <= 'z' && c >= 'a'))
		return (1);
	return (0);
}
