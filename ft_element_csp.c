#include "ft_printf.h"

void	print_char(va_list target, int *ag_cnt, int *error)
{
	char	tmp;

	tmp = va_arg(target, int);
	if (error_check(write(1, &tmp, 1), error) == -1)
		return ;
	(*ag_cnt)++;
}

void	print_str(va_list target, int *ag_cnt, int *error)
{
	char	*tmp;

	tmp = va_arg(target, char *);
	if (tmp == NULL)
	{
		if (error_check(write(1, "(null)", 6), error) == -1)
			return ;
		(*ag_cnt) += 6;
		return ;
	}
	if (tmp == NULL)
	{
		error_check(write(1, "\0", 1), error);
		return ;
	}
	while (*tmp != '\0')
	{
		if (error_check(write(1, tmp, 1), error) == -1)
			return ;
		(*ag_cnt)++;
		tmp++;
	}
}

void	print_ptr(va_list target, int *ag_cnt, int *error)
{
	unsigned long long	tmp;
	char				stack[100];
	int					i;

	i = 0 ;
	tmp = (unsigned long long)(va_arg(target, void *));
	if (error_check(write(1, "0x", 2), error) == -1)
		return ;
	(*ag_cnt) += 2;
	if (tmp == 0)
	{
		if (error_check(write(1, "0", 1), error) == -1)
			return ;
		(*ag_cnt)++;
		return ;
	}
	while (tmp > 0)
	{
		stack[i++] = "0123456789abcdef"[tmp % 16];
		tmp = tmp / 16;
	}
	if (print_stack(i, stack, error, ag_cnt) == -1)
		return ;
}
