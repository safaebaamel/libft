#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	int *str;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
