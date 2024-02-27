/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:16:05 by emok              #+#    #+#             */
/*   Updated: 2023/10/09 18:16:06 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;
	void	*chartemp;

	if (lst == 0)
		return (0);
	new_lst = 0;
	tmp = 0;
	while (lst != 0)
	{
		chartemp = (*f)(lst->content);
		tmp = ft_lstnew(chartemp);
		if (tmp == 0 || (tmp -> content) == NULL)
		{
			free(tmp);
			del(chartemp);
			ft_lstclear(&new_lst, (*del));
			return (0);
		}
		ft_lstadd_back(&new_lst, tmp);
		tmp = tmp -> next;
		lst = lst -> next;
	}
	return (new_lst);
}
