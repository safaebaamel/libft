// in C, the memset() function stores a specific character in the first n number of places of a memory block.
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	k;
	char	*pos;

	k = 0;
	pos = (char *)b;
	while (k <= len)
	{
		pos[k] = c;
		k++;
	}
	return (pos);
}
