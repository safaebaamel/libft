#include "libft.h"
/*Alloue (avec malloc(3)) et retourne un maillon “frais”. Les champs content et content_size du nouveau maillon sont initialisés par copie des paramètres de la fonction. Si le pa- ramètre content est nul, le champs content est initialisé à NULL et le champs content_size est initialisé à 0 quelque soit la valeur du paramètre content_size. Le champ next est initialisé à NULL. Si l’allocation échoue, la fonction renvoie NULL.*/


void	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!(new = (t_list*)malloc(sizeof(t_list)*content_size)))
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else 
	{
		if (!(new->content = (void *)malloc(content_size)))
		       return (NULL);
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;	
	}
	new->next = 0;
	return (new);

}
