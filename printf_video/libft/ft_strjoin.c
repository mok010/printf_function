/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:11:20 by emok              #+#    #+#             */
/*   Updated: 2023/10/09 18:11:21 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (tmp == NULL)
		return (0);
	while (*s1 != '\0')
		tmp[i++] = *s1++;
	while (*s2 != '\0')
		tmp[i++] = *s2++;
	tmp[i] = '\0';
	return (tmp);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s", ft_strjoin("today is", "monday"));
// 	return (0);
// }
