#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *new;

	new = *alst;
	while (new != NULL)
	{
		ft_lstdelone(alst, del(new->content, new->content_size));
		new = new->next;
	}
	new = NULL;
}
