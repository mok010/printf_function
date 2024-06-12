#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc((sizeof(char) * ft_strlen(s)) + 1);
	if (result == NULL)
		return (0);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>
// static char	ft_upper(unsigned int i, char c)
// {
// 	if (97 <= c && c <= 122)
// 	{
// 		if (i % 2 == 0)
// 		{
// 			c -= 32;
// 		}
// 	}
// 	return (c);
// }
// int	main(void)
// {
// 	char *str = "helloworld";
// 	char *n_str = ft_strmapi(str, ft_upper);
// 	printf("%s", n_str);
// }