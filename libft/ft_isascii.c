#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}
// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("ft_isascii : %d\n", ft_isascii('a'));
// 	printf("isascii : %d\n", isascii('a'));
// 	printf("ft_isascii : %d\n", ft_isascii('\n'));
// 	printf("isascii : %d\n", isascii('\n'));
// 	printf("ft_isascii : %d\n", ft_isascii(129));
// 	printf("isascii : %d\n", isascii(129));
// }
