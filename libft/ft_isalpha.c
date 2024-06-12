#include "libft.h"

int	ft_isalpha(int c)
{
	if (65 <= c && c <= 90)
		return (1);
	else if (97 <= c && c <= 122)
		return (1);
	else
		return (0);
}
// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("ft_isalpha : %d\n", ft_isalpha('a'));
// 	printf("isalpha : %d\n", isalpha('a'));
// 	printf("ft_isalpha : %d\n", ft_isalpha('z'));
// 	printf("isalpha : %d\n", isalpha('z'));
// 	printf("ft_isalpha : %d\n", ft_isalpha('B'));
// 	printf("isalpha : %d\n", isalpha('B'));
// 	printf("ft_isalpha : %d\n", ft_isalpha('Z'));
// 	printf("isalpha : %d\n", isalpha('Z'));
// 	printf("ft_isalpha : %d\n", ft_isalpha('1'));
// 	printf("isalpha : %d\n", isalpha('1'));
// }
