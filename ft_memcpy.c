#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char *src;
	unsigned char *dest;
	int i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	src =(unsigned char *)s1;
	dest =(unsigned char *)s2;
	i = 0;
	while (i <= n)
	{
		src[i] = dest[i];
		i++;
		n--;
	}
	return (dest);
}
