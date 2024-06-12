#include "libft.h"

static int	ft_countword(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		if (n > -10)
			count--;
		n = n / 10;
		count += 2;
	}
	while (n / 10 != 0)
	{
		count++;
		n = n / 10;
	}
	count++;
	return (count + 1);
}

static	void	ft_minus_case(int count, int n, char *result)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		result[0] = '0';
		return ;
	}
	result[i] = '-';
	if (n == -2147483648)
	{
		result[count - 2 - i] = ((n % 10) * -1) + '0';
		n = (n / 10) * -1;
		i++;
	}
	else
		n *= -1;
	while (n >= 10)
	{
		result[count - 2 - i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	result[count - i - 2] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*result;
	int		count;
	int		i;

	i = 0;
	count = ft_countword(n);
	result = (char *)malloc((count) * (sizeof(char)));
	if (result == NULL)
		return (0);
	result[count - 1] = '\0';
	if (n <= 0)
	{
		ft_minus_case(count, n, result);
		return (result);
	}
	else
	{
		while (count - 2 - i >= 0)
		{
			result[count - 2 - i] = (n % 10) + '0';
			n = n / 10;
			i++;
		}
	}
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int num = -10;
// 	char *str = 0;
// 	str = ft_itoa(num);
// 	printf("%s", str);
// 	// int i = 0;
// 	// while (i < 10)
// 	// {
// 	// 	printf(" i: %c\n", str[i]);
// 	// 	i++;
// 	// }
// 	return (0);
// }
