#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)ptr;
	while (i < num)
	{
		temp[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	int i;
// 	char str1[] = "testcase";
// 	char str2[] = "testcase";

// 	i = 0;
// 	ft_memset(str1, 'A', 5 * sizeof(char));
// 	while (str1[i] != '\0')
// 	{
// 		printf("%c", str1[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("\n");
// 	memset(str2, 'A', 5 * sizeof(char));
// 	while (str2[i] != '\0')
// 	{
// 		printf("%c", str2[i]);
// 		i++;
// 	}
// }
