#include "libft.h"

void	str_cat(int size, char **strs, char *sep, char *tab)
{
	int i;
	int j;
	int k;

	i = 1;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			tab[k++] = strs[i][j];
			j++;
		}
		if (i < size - 1)
		{
			j = -1;
			while (sep[++j] != '\0')
				tab[k++] = sep[j];
		}
		i++;
	}
	tab[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *tab;
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlen(strs[i]);
		i++;
	}
	j += ft_strlen(sep);
	tab = (char*)malloc(sizeof(char) * j);
	if (size == 0)
		return (NULL);
	str_cat(size,strs,sep,tab);
	return (tab);
}
