#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	tmp = malloc(count * size);
	if (tmp == NULL)
		return (0);
	ft_bzero(tmp, count * size);
	return (tmp);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *str1 = ft_calloc(5, sizeof(int));
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d", str1[i]);
// 	}
// 	printf("\n");
// 	char *str2 = calloc(5, sizeof(int));
// 	for (int j = 0; j < 5; j++)
// 	{
// 		printf("%d", str2[j]);
// 	}
// }
