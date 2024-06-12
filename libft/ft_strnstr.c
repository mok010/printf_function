#include "libft.h"

static int	ft_checkstr(const char *haystack, const char *needle, size_t i)
{
	size_t	count;

	count = 0;
	while (needle[count] != '\0' && haystack[i] != '\0')
	{
		if (haystack[i] != needle[count])
			return (1);
		i++;
		count++;
	}
	if (needle[count] == '\0')
		return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len < 0)
		return (0);
	if (haystack[0] == '\0')
		return (0);
	while (i + ft_strlen(needle) - 1 < len)
	{
		if (haystack[i] == needle[0])
			if (ft_checkstr(haystack, needle, i) == 0)
				return (&((char *)haystack)[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*haystack = "123456123";
// 	char	*needle = "456";
// 	char	*needle2 = "";
// 	char	*needle3 = "56789";
// 	printf("\ntest1 : strnstr : %s", strnstr(haystack, needle, 20));
// 	printf("\ntest1 : ft_strnstr : %s", ft_strnstr(haystack, needle, 20));
// 	printf("\ntest2 : strnstr : %s", strnstr(haystack, needle2, 20));
// 	printf("\ntest2 : ft_strnstr : %s", ft_strnstr(haystack, needle2, 20));
// 	printf("\ntest3 : strnstr : %s", strnstr(haystack, needle3, 20));
// 	printf("\ntest3 : ft_strnstr : %s", ft_strnstr(haystack, needle3, 20));
// 	printf("\ntest4 : strnstr : %s", strnstr("", "coucou", -1));
// 	printf("\ntest4 : ft_strnstr : %s", ft_strnstr("", "coucou", -1));
// }
