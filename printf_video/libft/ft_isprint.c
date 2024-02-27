/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:28:46 by emok              #+#    #+#             */
/*   Updated: 2023/10/09 20:28:47 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}
// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("ft_isprint : %d\n", ft_isprint('a'));
// 	printf("isprint : %d\n", isprint('a'));
// 	printf("ft_isprint : %d\n", ft_isprint('\n'));
// 	printf("isprint : %d\n", isprint('\n'));
// 	printf("ft_isprint : %d\n", ft_isprint(' '));
// 	printf("isprint : %d\n", isprint(' '));
// }
