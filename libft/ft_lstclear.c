#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst == 0)
		return ;
	if ((*lst)->next != 0)
		ft_lstclear(&((*lst)->next), (*del));
	ft_lstdelone((*lst), (*del));
	(*lst) = 0;
	return ;
}
