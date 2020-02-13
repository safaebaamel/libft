#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	char *str;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s))))
		return NULL;
	while (s[i++] != '\0')
	{
		if (s[i] == ' ' && s[i] == '\n' && s[i] == '\t')
		{
			i++;
		}
		str[i] = s[i];
	}
	str[i] = '\0';
	return (str);
}
