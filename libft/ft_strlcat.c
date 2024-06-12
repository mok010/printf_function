#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ori_dst;

	i = 0;
	j = 0;
	if (dstsize < 0)
		return (ft_strlen(src) + dstsize);
	ori_dst = ft_strlen(dst);
	if (ft_strlen(dst) > dstsize)
		return (ft_strlen(src) + dstsize);
	while (dst[i] != '\0')
		i++;
	while (i + 1 < dstsize && src[j] != '\0')
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (ori_dst + ft_strlen(src));
}
// #include<string.h>
// #include<stdio.h>
// int main(void)
// {
// 	char src1[10] = "apple";
//     char dst1[10] = "pie";
// 	size_t	i = 0;
// 	printf("test1: strlcat_return : %lu", strlcat(dst1, src1, 6));
// 	printf("\ntest1: strlcat: ");
// 	while (src1[i] != '\0')
// 		printf("%c", src1[i++]);
// 	char src2[10] = "apple";
//     char dst2[10] = "pie";
// 	i = 0;
// 	printf("\ntest1: ft_strlcat_return : %lu", ft_strlcat(dst2, src2, 6));
// 	printf("\ntest1: ft_strlcat: ");
// 	while (src2[i] != '\0')
// 		printf("%c", src2[i++]);
// 	char src3[10] = "apple";
//     char dst3[10] = "pie";
// 	i = 0;
// 	printf("\ntest2: strlcat_return : %lu", strlcat(dst3, src3, 0));
// 	printf("\ntest2: strlcat: ");
// 	while (src3[i] != '\0')
// 		printf("%c", src3[i++]);
// 	char src4[10] = "apple";
//     char dst4[10] = "pie";
// 	i = 0;
// 	printf("\ntest2: ft_strlcat_return : %lu", ft_strlcat(dst4, src4, 0));
// 	printf("\ntest2: ft_strlcat: ");
// 	while (src4[i] != '\0')
// 		printf("%c", src4[i++]);
// }