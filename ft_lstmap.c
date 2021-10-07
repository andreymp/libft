#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void	(*del)(void *))
{
	t_list	*new;

	new = NULL;
	if (!lst)
		return (new);
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		new->next = lst->next;
	}
	ft_lstclear(&lst, del);
	return (new);
}