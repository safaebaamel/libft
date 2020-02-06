#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		(unsigned char *)src[i] = (unsigned char *)dest[i];
		i++;
	}
	return (dest);
}	

/* the memcpy function copies n characters from the object pointed to by s2 into the object pointed to by s1. It returns a pointer to the destination.  */
