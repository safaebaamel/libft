#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int j;
	int i;
	int length;

	length = -1;
	i = 0;
	while (to_find[++length])
		j = 0;
		while (str[i] != '\0')
		{
			while (str[i+j] == to_find[j])
				j++;
			if (j == length)
				return (str + i);
			       i++;
		}
		return 0;
}
