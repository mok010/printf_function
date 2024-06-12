#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("ft_strlen : %lu\n", ft_strlen("abcde123456"));
// 	printf("strlen : %lu\n", strlen("abcde123456"));
// 	printf("ft_strlen : %lu\n", ft_strlen("123456789"));
// 	printf("strlen : %lu\n", strlen("123456789"));
// 	printf("ft_strlen : %lu\n", ft_strlen("\0"));
// 	printf("strlen : %lu\n", strlen("\0"));
// }
