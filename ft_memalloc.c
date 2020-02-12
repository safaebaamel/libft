#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *tab;

	if (!(tab = (char*)malloc(size)))
		return (NULL);
	else 
		ft_bzero(tab,size);
	return (tab);
}
