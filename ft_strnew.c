#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *tab;

	if (!(tab = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	ft_memset(tab, 0,size);
	return (tab);
}
