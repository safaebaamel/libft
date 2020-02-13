#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	int *str; 

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s))))
		return NULL;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
