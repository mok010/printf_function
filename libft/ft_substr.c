#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) <= start)
	{
		tmp = (char *)malloc(1);
		if (tmp == NULL)
			return (0);
		tmp[0] = 0;
		return (&tmp[0]);
	}	
	tmp = (char *)malloc(len * sizeof(char) + 1);
	if (tmp == NULL)
		return (0);
	while (i < len && s[start + i] != '\0')
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
// #include <stdio.h>
// int	main(void)
// {
// 	// size_t	i = 0;
// 	// size_t	num = 5;
// 	// char *tmp  = ft_substr("love dogs",  0, num);

// 	// while (i < num)
// 	// {
// 	// 	printf("%c", tmp[i]);
// 	// 	i++;	
// 	// }
// 	char *str = "i love coffee";
// 	return (0);
// }
