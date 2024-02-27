/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:10:24 by emok              #+#    #+#             */
/*   Updated: 2023/10/09 18:10:26 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;

	tmp = malloc(ft_strlen(s1) + 1);
	if (tmp == NULL)
		return (0);
	ft_strlcpy(tmp, s1, ft_strlen(s1) + 1);
	return (tmp);
}
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("strdup : %s", strdup("dog is cute"));
// 	printf("\nft_strdup: %s", ft_strdup("dog is cute"));
// }
