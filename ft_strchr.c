#include "libft.h"

char	*ft_strchr(const char *string , int c)
{
	int i;

	i = 0;
	while (string[i++] != '\0')
	{
		if (string[i] == c)
			return (string);
	}
	if (*string == '\0')
		return (string);
	return (NULL);
}
