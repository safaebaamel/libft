#include "libft.h"

//memcmp

int	memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char *s1;
	const unsigned char *s2;

	s1 = str1;
	s2 = str2;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((int*)s1[i] - s2[i]);
}
