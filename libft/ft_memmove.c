#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*n_dst;
	unsigned char	*n_src;

	i = 0;
	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	if (n_dst == n_src)
		return (dst);
	while (i < len)
	{
		if (n_dst <= n_src)
			n_dst[i] = n_src[i];
		else
			n_dst[len - i - 1] = n_src[len - i - 1];
		i++;
	}
	return (dst);
}
// #include<string.h>
// #include<stdio.h>
// int main(void)
// {
// 	char src1[] = "0123456789";
//     char *dest1 = src1 + 3;
// 	int	i = 0;
//     memmove(dest1, src1, sizeof(char) * 5);
// 	printf("test1: memmove_src :");
// 	while (i < 10)
// 		printf("%c", src1[i++]);
// 	printf("\ntest1: memmove_dest :"); 
// 	i = 0;
// 	while (i < 10)
// 		printf("%c", dest1[i++]);
// 	i = 0;

// 	char src2[] = "0123456789";
//     char *dest2 = src2 + 3;
// 	ft_memmove(dest2, src2, sizeof(char) * 5);
// 	printf("\ntest1: ft_memmove_src :");
// 	while (i < 10)
// 		printf("%c", src2[i++]);
// 	i = 0;
// 	printf("\ntest1: ft_memmove_dest :"); 
// 	while (i < 10)
// 		printf("%c", dest2[i++]);

// 	i = 0;
// 	char src3[] = "0123456789";
//     char *dest3 = src3 - 3;
// 	memmove(dest3, src3, sizeof(char) * 5);
// 	printf("\ntest2: memmove_src :");
// 	while (i < 10)
// 		printf("%c", src3[i++]);
// 	i = 0;
// 	printf("\ntest2: memmove_dest :"); 
// 	while (i < 10)
// 		printf("%c", dest3[i++]);

// 	i = 0;
// 	char src4[] = "0123456789";
//     char *dest4 = src4 - 3;
// 	ft_memmove(dest4, src4, sizeof(char) * 5);
//     printf("\ntest2: ft_memmove_src :");
// 	while (i < 10)
// 		printf("%c", src4[i++]);
// 	i = 0;
// 	printf("\ntest2: ft_memmove_dest :"); 
// 	while (i < 10)
// 		printf("%c", dest4[i++]);
//     return 0;
// }
