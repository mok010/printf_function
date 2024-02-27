/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:04:31 by emok              #+#    #+#             */
/*   Updated: 2023/10/09 18:04:33 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("ft_strlen : %lu\n", ft_strlen("abcde123456"));
// 	printf("strlen : %lu\n", strlen("abcde123456"));
// 	printf("ft_strlen : %lu\n", ft_strlen("123456789"));
// 	printf("strlen : %lu\n", strlen("123456789"));
// 	printf("ft_strlen : %lu\n", ft_strlen("\0"));
// 	printf("strlen : %lu\n", strlen("\0"));
// }
