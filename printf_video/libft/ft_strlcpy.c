/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:06:51 by emok              #+#    #+#             */
/*   Updated: 2023/10/09 18:06:52 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (!dest || !src)
		return (0);
	while (i < src_len && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (src_len);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char dest1[9] = "applepie";
// 	char dest2[9] = "applepie";
// 	const char src[6] = "peach";
// 	int i = 0;;

// 	printf("strlcpy_return : %lu\n", strlcpy(dest1, src, 8));
// 	printf("ft_strlcpy_return : %lu\n", ft_strlcpy(dest2, src, 8));
// 	printf("strlcpy : %s\n", dest1);
// 	printf("ft_strlcpy : %s\n", dest2);

// 	char dest3[9] = "applepie";
// 	char dest4[9] = "applepie";
// 	printf("strlcpy_return : %lu\n", strlcpy(dest3, src, 0));
// 	printf("ft_strlcpy_return : %lu\n", ft_strlcpy(dest4, src, 0));
// 	while (i < 9)
// 	{
// 		printf("strlcpy : %c\n", dest3[i++]);
// 	}
// 	printf("\n");
// 	i = 0;
// 	while (i < 9)
// 	{
// 		printf("ft_strlcpy : %c\n", dest4[i++]);
// 	}
// 	return(0);
// }