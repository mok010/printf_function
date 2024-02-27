/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:18:37 by emok              #+#    #+#             */
/*   Updated: 2023/10/09 18:18:38 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*tmp;

	i = 0;
	tmp = (void *)s;
	while (i < n)
	{
		if ((((unsigned char *)tmp)[i]) == (unsigned char)c)
			return (&tmp[i]);
		i++;
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	*str1 = "starComputer00";
// 	char	c1 = 'a';//있는거
// 	printf("test1 : memchr_lct :%p" , memchr(str1, c1, 14));
// 	printf("\ntest1 : memchr :%s" , (char *)(memchr(str1, c1, 14)));	
// 	printf("\ntest1 : ft_memchr_lct :%p" , ft_memchr(str1, c1, 14));
// 	printf("\ntest1 : ft_memchr :%s" , (char *)(ft_memchr(str1, c1, 14)));
// 	printf("\n");
// 	char	c2 = '\0';//'\0'
// 	printf("\ntest2 : memchr_lct :%p" , memchr(str1, c2, 14));
// 	printf("\ntest2 : memchr :%s" , (char *)(memchr(str1, c2, 14)));	
// 	printf("\ntest2 : ft_memchr_lct :%p" , ft_memchr(str1, c2, 14));
// 	printf("\ntest2 : ft_memchr :%s" , (char *)(ft_memchr(str1, c2, 14)));
// 	printf("\n");
// 	char	c3 = 'S';//없는거
// 	printf("\ntest3 : memchr_lct :%p" , memchr(str1, c3, 14));
// 	printf("\ntest3 : memchr :%s" , (char *)(memchr(str1, c3, 14)));	
// 	printf("\ntest3 : ft_memchr_lct :%p" , ft_memchr(str1, c3, 14));
// 	printf("\ntest3 : ft_memchr :%s" , (char *)(ft_memchr(str1, c3, 14)));
// }
