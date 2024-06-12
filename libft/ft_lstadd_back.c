#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = (*lst);
	if (*lst == NULL)
	{
		(*lst) = new;
		return ;
	}
	while (tmp -> next != 0)
		tmp = tmp -> next;
	tmp -> next = new;
}
