#include "ft_printf.h"

void	print_per(int *ag_cnt, int *error)
{
	if (error_check(write(1, "%", 1), error) == -1)
		return ;
	(*ag_cnt)++;
}

int	is_element(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd')
		return (0);
	else if (c == 'i' || c == 'u' || c == 'x' || c == 'X')
		return (0);
	else if (c == '%')
		return (0);
	else
		return (1);
}

int	print_element(char elm, va_list target, int *ag_cnt, int *error)
{
	if (elm == 'c')
		print_char(target, ag_cnt, error);
	else if (elm == 's')
		print_str(target, ag_cnt, error);
	else if (elm == 'p')
		print_ptr(target, ag_cnt, error);
	else if (elm == 'd')
		print_int(target, ag_cnt, error);
	else if (elm == 'i')
		print_int(target, ag_cnt, error);
	else if (elm == 'u')
		print_unint(target, ag_cnt, error);
	else if (elm == 'x')
		print_x(target, 0, ag_cnt, error);
	else if (elm == 'X')
		print_x(target, 32, ag_cnt, error);
	else if (elm == '%')
		print_per(ag_cnt, error);
	else
		return (1);
	return (0);
}

int	ft_get_element(char *str, int *index, va_list target, int *ag_cnt)
{
	int	error;

	error = 0;
	(*index)++;
	if (is_element(str[(*index)]) == 0)
	{
		print_element(str[(*index)], target, ag_cnt, &error);
	}
	else
	{
		if (error_check(write(1, &str[(*index)], 1), &error) == -1)
			return (-1);
		(*ag_cnt)++;
	}
	(*index)++;
	if (error == -1)
		return (-1);
	return (0);
}

int	ft_printf(const char *main_str, ...)
{
	char	*str;
	int		index;
	int		ag_cnt;
	va_list	mtb_arg;

	index = 0;
	ag_cnt = 0;
	str = (char *)main_str;
	va_start(mtb_arg, main_str);
	while (str[index] != '\0')
	{
		if (str[index] == '%')
			if (ft_get_element(str, &index, mtb_arg, &ag_cnt) == -1)
				return (-1);
		while (str[index] != '%' && str[index] != '\0')
		{
			if (write(1, &str[index], 1) == -1)
				return (-1);
			index++;
			ag_cnt++;
		}
		va_end(mtb_arg);
	}
	return (ag_cnt);
}
#include <stdio.h>
int main(void)
{
	int a = ft_printf("ft: %c" , 0);
	printf("\n%d\n", a);
	a = printf("or: %c", 0);
	printf("\n%d", a);
	return 0;
}
