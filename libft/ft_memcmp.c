#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*n_s1;
	unsigned char	*n_s2;

	i = 0;
	n_s1 = (unsigned char *)s1;
	n_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (n_s1[i] != n_s2[i])
		{
			return (n_s1[i] - n_s2[i]);
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char *s1 = "applepie";
// 	char *s2 = "applejam";
// 	printf("test1 : memcmp : %d", memcmp(s1, s2, 5));
// 	printf("\ntest1 : ft_memcmp : %d", ft_memcmp(s1, s2, 5));
// 	printf("\ntest2 : memcmp : %d", memcmp(s1, s2, 6));
// 	printf("\ntest2 : ft_memcmp : %d", ft_memcmp(s1, s2, 6));
// 	printf("\ntest2 : memcmp : %d", memcmp(s1, s2, 0));
// 	printf("\ntest2 : ft_memcmp : %d", ft_memcmp(s1, s2, 0));
// 	char *s3 = "\0";
// 	char *s4 = "\0";
// 	printf("\ntest3 : memcmp : %d", memcmp(s3, s4, 6));
// 	printf("\ntest3 : ft_memcmp : %d", ft_memcmp(s3, s4, 6));
// }
