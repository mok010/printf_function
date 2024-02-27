/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:06:08 by emok              #+#    #+#             */
/*   Updated: 2023/10/09 18:06:09 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*n_dst;
	unsigned char	*n_src;

	i = 0;
	if (dst == 0 && src == 0)
	{
		return (0);
	}
	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	while (i < n)
	{
		n_dst[i] = n_src[i];
		i++;
	}
	return (dst);
}

// #include<string.h>
// #include<stdio.h>
// int main(void)
// {
//     // int src1[] = { 12,22,32 };
//     // int dest1[3];
// 	// int src2[] = { 12,22,32 };
//     // int dest2[3];
// 	// memcpy(dest1, src1, sizeof(int) * 3);
// 	// ft_memcpy(dest2, src2, sizeof(int) * 3);
// 	// printf("memcpy_src : ");
//     // for (int i = 0; i < 3; ++i)
//     // {
//     //     printf("%d ", src1[i]);
//     // }
// 	// printf("ft_memcpy_src : ");
// 	// for (int i = 0; i < 3; ++i)
//     // {
// 	// 	printf("%d ", src2[i]);
//     // }
//     // printf("\n");
//     // printf("memcpy_dest : ");
//     // for (int i = 0; i < 3; ++i)
//     // {
//     //     printf("%d ", dest1[i]);
//     // }
// 	// printf("ft_memcpy_dest : ");
// 	// for (int i = 0; i < 3; ++i)
//     // {
// 	// 	printf("%d ", dest2[i]);
//     // }
// 	const char src1[] = "applepie";
//     char dest1[] = "peachpie";
// 	const char src2[] = "applepie";
//     char dest2[] = "peachpie";
//     memcpy(0, "", 5);
// 	ft_memcpy(0, "12", 5);
// 	printf("memcpy_src : ");
//     printf("%s \n", src1);
// 	printf("ft_memcpy_src : ");
// 	printf("%s \n", src2);
//     printf("memcpy_dest : ");
//     printf("%s\n", dest1);
// 	printf("ft_memcpy_dest : ");
// 	printf("%s\n", dest2);
//     return 0;
// }