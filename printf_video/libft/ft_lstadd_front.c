/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:18:42 by emok              #+#    #+#             */
/*   Updated: 2023/10/25 15:18:46 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == 0)
		return ;
	new -> next = (*lst);
	(*lst) = new;
}
// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*list1;
// 	t_list	*list2;
// 	list1 = (t_list *)malloc(sizeof(t_list));
// 	if (list1 == 0)
// 		return (NULL);
// 	list2 = (t_list *)malloc(sizeof(t_list));
// 	if(list2 == 0)
// 		return (NULL);
// 	list1 -> content = "hi";
// 	list2 -> content = "bye";
// 	ft_lstadd_front(&list1, list2);
// 	printf("%s", list2 -> next);
// }
