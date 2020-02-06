#include "libft.h"

// Move block of memory
// memmove() is used to copy a block of memory from a location to another. It is declared in string.h
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (dest == src)
		return (dest);
	while (i < len)
	{
		(unsigned char *)src[i] = (unsigned char *)dest[i];
		i++;
	}
	return (dest);
}
