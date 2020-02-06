#include <string.h>

//  The memccpy() function operates as efficiently as possible on memory areas. It does not check for overflow of any receiving memory area. Specifically, memccpy() copies bytes from memory area s2 into s1, stopping after the first occurrence of c has been copied, or after n bytes have been copied, whichever comes first. 

void	*ft_memccpy(void *s1,const void *s2,int c,size_t n)
{
	int i;

	i = 0;	
	while (i < n)
	{
		if ((*(unsigned char *)s1++ = *(unsigned char *)s2++) == (unsigned char *)s)
			return (s1);
		i++;
	}
	return (NULL);
}
