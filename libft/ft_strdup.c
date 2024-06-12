#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;

	tmp = malloc(ft_strlen(s1) + 1);
	if (tmp == NULL)
		return (0);
	ft_strlcpy(tmp, s1, ft_strlen(s1) + 1);
	return (tmp);
}
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("strdup : %s", strdup("dog is cute"));
// 	printf("\nft_strdup: %s", ft_strdup("dog is cute"));
// }
