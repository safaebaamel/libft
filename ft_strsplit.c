#include "libft.h"

/* this function takes a string and prints it's caracters while using each caracter of the charset as a separator, we'll need several functions to help the main one, one to look for the caracter in common, one to count the length of the string, one to count how many words we have and the last one to copy the strings so we can separate em */

int	find_the_sep(char *str, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == *str)
			return (1);
			i++;
	}
	return 0;
}

int	word_length(char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i] != '\0' && !(find_the_sep(str + i,charset)))
		i++;
	return (i);
}

int	word_count(char *str, char *charset)
{
	int i;
	int j;

	j = 0;
	while (*str)
	{
		while (*str && find_the_sep(str,charset))
			str++;
		i = word_length(str, charset);
		str += i; //we add i to the string when the sep isn't found, so the str mooves forward , i gets its value so j can be incremented by 1, until the loop is over.
		if (i)
			j++;
	}
	return (j);
}

char	*ft_copy(char *str, int n)
{
	char *dest;
	// n is the word length
	if(!(dest = malloc(sizeof(char) * n)))
		return (0);
	dest[n] = '\0';
	while (n--)
		dest[n] = str[n];
	return (dest);
}

char	**ft_strsplit(char *s,char *c)
{
	char **tab;
	int i;
	int n;
	int size;

	size = word_count(s,c);
	if (!(tab = malloc(size * sizeof(char*))))
		return (0);
	i = 0;
	while (i < size)
	{
		while (*s && find_the_sep(s,c))
			s++;
		n = word_length(s,c);
		if (!(tab[i] = ft_copy(s,n)))
			return 0;
		s += n;
	i++;	
	}
	//the last element should equal to 0
	tab[size] = 0;
	return (tab);
}

