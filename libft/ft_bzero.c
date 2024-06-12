#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str1[10] = "123456789";
// 	char str2[10] = "123456789";
// 	ft_bzero(str1, 5);
// 	for (int i = 0; i < 10; i++)
// 		printf("%d", str1[i]);
// 	printf("\n");
// 	bzero(str2, 5);
// 	for (int j = 0; j < 10; j++)
// 		printf("%d", str2[j]);
// }
