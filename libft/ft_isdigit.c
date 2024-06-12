#include "libft.h"

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}
// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("ft_isdigit : %d\n", ft_isdigit('a'));
// 	printf("isdigit : %d\n", isdigit('a'));
// 	printf("ft_isdigit : %d\n", ft_isdigit('D'));
// 	printf("isdigit : %d\n", isdigit('D'));
// 	printf("ft_isdigit : %d\n", ft_isdigit('0'));
// 	printf("isdigit : %d\n", isdigit('0'));
// 	printf("ft_isdigit : %d\n", ft_isdigit('9'));
// 	printf("isdigit : %d\n", isdigit('9'));
// }
