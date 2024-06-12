#include "libft.h"

static char	*ft_error_case(char *result)
{
	result = (char *)malloc(1);
	if (result == 0)
		return (0);
	result[0] = '\0';
	return (result);
}

static int	check(char c, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (c == s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static char	*checkindex(char *s1, char *s2)
{
	int		i;
	int		start;
	int		end;
	char	*result;

	i = -1;
	start = 0;
	result = 0;
	while (check(s1[++i], s2) == 1)
		start = i + 1;
	i = 0;
	end = (int)ft_strlen(s1);
	while (check(s1[(int)ft_strlen(s1) - i - 1], s2) == 1)
		end = (int)ft_strlen(s1) - i++ - 1;
	if (end <= start)
		return (ft_error_case(result));
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (result == NULL)
		return (0);
	result[end - start] = '\0';
	i = 0;
	while (i < (end - start))
		result[i++] = 'A';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*result;

	result = checkindex((char *)s1, (char *)s2);
	if (result == NULL)
		return (0);
	i = 0;
	j = 0;
	while (check(((char *)s1)[i], (char *)s2) == 1)
		i++;
	while (result[j] != '\0')
		result[j++] = s1[i++];
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "te"));
// 	printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "tel"));
// 	return (0);
// }
