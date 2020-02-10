#include "libft.h"

char	*ft_strrchr(char *str,int ch)
{
	int i;

	i = ft_strlen(str);
	while (str[i--])
	{
		if (str[i] == c)
			return ((char*)&str[i]);
	}
	return (NULL);	
}
