#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	if (i < n && (s1[i] == '\0' || s2[i] == '\0'))
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char *s1 = "applepie";
// 	char *s2 = "applejam";
// 	printf("test1 : strncmp : %d",(strncmp("test\200", "test\0", 6)));
// 	printf("\ntest1 : ft_strncmp : %d", (ft_strncmp("test\200", "test\0", 6)));
// 	printf("\ntest2 : strncmp : %d", strncmp(s1, s2, 6));
// 	printf("\ntest2 : ft_strncmp : %d", ft_strncmp(s1, s2, 6));
// 	printf("\ntest2 : strncmp : %d", strncmp(s1, s2, 0));
// 	printf("\ntest2 : ft_strncmp : %d", ft_strncmp(s1, s2, 0));
// 	char *s3 = "\0";
// 	char *s4 = "\0";
// 	printf("\ntest2 : strncmp : %d", strncmp(s3, s4, 6));
// 	printf("\ntest2 : ft_strncmp : %d", ft_strncmp(s3, s4, 6));
// }
