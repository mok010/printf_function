/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:24:07 by emok              #+#    #+#             */
/*   Updated: 2023/10/23 19:24:09 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>
// void example(unsigned int i, char *s)
// {
// 	if (i % 2 != 0)
// 	{
// 		s[i] = '|';
// 	}
// }
// int main(void)
// {
// 	char str[] = "ASBDCKDHEiFk";
// 	ft_striteri(str, example);
// 	printf("%s", str);
// 	return (0);
// }
