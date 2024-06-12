#include "libft.h"

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		return (c + 32);
	else
		return (c);
}

// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("test1 : %c", tolower('a'));
// 	printf("\ntest1 : %c", ft_tolower('a'));
// 	printf("\ntest2 : %c", tolower('A'));
// 	printf("\ntest2 : %c", ft_tolower('A'));
// 	printf("\ntest3 : %d", tolower(200));
// 	printf("\ntest3 : %d", ft_tolower(200));
// }