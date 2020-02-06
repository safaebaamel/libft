#include <string.h>
#include <stdio.h>

//the memchr function searches within the first n characters of the object pointed to by s for the character c. It returns a pointer to it.
// (Search Memory Block for Character)
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char *)s[i] == (unsigned char *)c)
			return (s);
		i++;
	}
	return (NULL);
}
