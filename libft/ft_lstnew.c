#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));
	if (result == 0)
		return (NULL);
	result -> content = content;
	result -> next = 0;
	return (result);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("contents : %s, next : %p", 
// ft_lstnew("0123456789")->content, ft_lstnew("0123456789")->next);
//     return (0);
// }
