#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int i;
	char *str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * len )))
		return (NULL);
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
