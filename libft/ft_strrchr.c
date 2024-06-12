#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;
	char	*result;

	i = 0;
	tmp = (char *)s;
	result = 0;
	c = c % 256;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == c)
			result = &tmp[i];
		i++;
	}
	if (c == '\0')
		result = &tmp[i];
	return (result);
}
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	*str1 = "starComputer00";
// 	char	c1 = 'r';//있는거
// 	printf("test1 : strchr_lct :%p" , strrchr(str1, c1));
// 	printf("\ntest1 : strchr :%s" , (strrchr(str1, c1)));	
// 	printf("\ntest1 : ft_strchr_lct :%p" , ft_strrchr(str1, c1));
// 	printf("\ntest1 : ft_strchr :%s" , (ft_strrchr(str1, c1 )));
// 	printf("\n");
// 	char	c2 = '\0';//'\0'
// 	printf("\ntest2 : strchr_lct :%p" , strrchr(str1, c2));
// 	printf("\ntest2 : strchr :%c" , *(strrchr(str1, c2)));	
// 	printf("\ntest2 : ft_strchr_lct :%p" , ft_strrchr(str1, c2));
// 	printf("\ntest2 : ft_strchr :%c" , *(ft_strrchr(str1, c2)));
// 	printf("\n");
// 	char	c3 = 'S';//없는거
// 	printf("\ntest3 : strchr_lct :%p" , strrchr(str1, c3));
// 	printf("\ntest3 : strchr :%c" , *(strrchr(str1, c3)));	
// 	printf("\ntest3 : ft_strchr_lct :%p" , ft_strrchr(str1, c3));
// 	printf("\ntest3 : ft_strchr :%c" , *(ft_strrchr(str1, c3)));
// }
