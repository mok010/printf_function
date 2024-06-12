#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n')
	{
		return (1);
	}
	else if (c == '\t' || c == '\v')
	{
		return (1);
	}
	else if (c == '\f' || c == '\r')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

static int	ft_isnum(char c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	minus;

	i = 0;
	result = 0;
	minus = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_isnum(str[i]) == 1)
			result = result * 10 + (str[i] - '0');
		else
			return (result * minus);
		i++;
	}
	return (result * minus);
}
// #include <stdio.h>
// #include <stdlib.h>
// int	main(void) 
// {
//     printf("ft_atoi : %d\n", ft_atoi("    -  2147483648star"));
// 	printf("atoi : %d", atoi("    -  2147483648star"));
//     return (0);
// }
