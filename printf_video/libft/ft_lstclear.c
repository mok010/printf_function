/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:15:34 by emok              #+#    #+#             */
/*   Updated: 2023/10/09 18:15:35 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
