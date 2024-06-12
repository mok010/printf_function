#include "libft.h"

int	ft_isalnum(int c)
{
	if (65 <= c && c <= 90)
		return (1);
	else if (97 <= c && c <= 122)
		return (1);
	else if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}
// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("ft_isalnum : %d\n", ft_isalnum('a'));
// 	printf("isalnum : %d\n", isalnum('a'));
// 	printf("ft_isalnum : %d\n", ft_isalnum('Z'));
// 	printf("isalnum : %d\n", isalnum('Z'));
// 	printf("ft_isalnum : %d\n", ft_isalnum('1'));
// 	printf("isalnum : %d\n", isalnum('1'));
//     printf("ft_isalnum : %d\n", ft_isalnum('!'));
// 	printf("isalnum : %d\n", isalnum('!'));
//     printf("ft_isalnum : %d\n", ft_isalnum('\0'));
// 	printf("isalnum : %d\n", isalnum('\0'));
// }
