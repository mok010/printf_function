/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:07:26 by emok              #+#    #+#             */
/*   Updated: 2023/10/09 18:07:27 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		return (c - 32);
	else
		return (c);
}

// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("test1 : %c", toupper('a'));
// 	printf("\ntest1 : %c", ft_toupper('a'));
// 	printf("\ntest2 : %c", toupper('A'));
// 	printf("\ntest2 : %c", ft_toupper('A'));
// 	printf("\ntest3 : %d", toupper(200));
// 	printf("\ntest3 : %d", ft_toupper(200));
// }