#include "libft.h" 

char	*ft_strdup(char *src)
{
	char *s1;
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	s1 = (char*)malloc(sizeof(char) * i);
	if (s1 == 0)
		return NULL;
	while (i >= 0)
	{
		s1[i] = src[i];
		i--;
	}
	s1[i] = '\0';
	return (s1);
}
