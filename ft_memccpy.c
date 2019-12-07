#include <string.h>

//  The memccpy() function operates as efficiently as possible on memory areas. It does not check for overflow of any receiving memory area. Specifically, memccpy() copies bytes from memory area s2 into s1, stopping after the first occurrence of c has been copied, or after n bytes have been copied, whichever comes first. 

void	*ft_memccpy(void *s1,const void *s2,int c,size_t n)
{
	unsigned char *src;
	unsigned char *dest;
	size_t i;
	unsigned char s;

	s = (unsigned char) c;
	i = 0;
	src = (unsigned char *) s1;
	dest = (unsigned char *) s2;
	while (i < n)
	{
		if ((*src++ = *dest++) == s)
			return (src);
		i++;
	}
	return (NULL);
}
