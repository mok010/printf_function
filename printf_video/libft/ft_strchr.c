/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:08:07 by emok              #+#    #+#             */
/*   Updated: 2023/10/09 18:08:08 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	c = c % 256;
	tmp = (char *)s;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == c)
			return (&tmp[i]);
		i++;
	}
	if (c == '\0')
		return (&tmp[i]);
	return (0);
}
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	*str1 = "starComputer00";
// 	char	c1 = 'a';//있는거
// 	printf("test1 : strchr_lct :%p" , strchr(str1, -1));
// 	printf("\ntest1 : strchr :%c" , *(strchr(str1, -1)));	
// 	printf("\ntest1 : ft_strchr_lct :%p" , ft_strchr(str1, -1));
// 	printf("\ntest1 : ft_strchr :%c" , *(ft_strchr(str1, -1 )));
// 	printf("\n");
// 	char	c2 = '\0';//'\0'
// 	printf("\ntest2 : strchr_lct :%p" , strchr(str1, c2));
// 	printf("\ntest2 : strchr :%c" , *(strchr(str1, c2)));	
// 	printf("\ntest2 : ft_strchr_lct :%p" , ft_strchr(str1, c2));
// 	printf("\ntest2 : ft_strchr :%c" , *(ft_strchr(str1, c2)));
// 	printf("\n");
// 	char	c3 = 'S';//없는거
// 	printf("\ntest3 : strchr_lct :%p" , strchr(str1, c3));
// 	printf("\ntest3 : strchr :%c" , *(strchr(str1, c3)));	
// 	printf("\ntest3 : ft_strchr_lct :%p" , ft_strchr(str1, c3));
// 	printf("\ntest3 : ft_strchr :%c" , *(ft_strchr(str1, c3)));
// }
