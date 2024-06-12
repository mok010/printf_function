#include "ft_printf.h"

void	not_plus_case(int check, int *i_tmp, int *error, int *ag_cnt)
{
	if (check == 0)
	{
		if (error_check(write(1, "0", 1), error) == -1)
			return ;
		(*ag_cnt)++;
		return ;
	}
	else
	{
		if (*i_tmp == -2147483648)
		{
			if (error_check(write(1, "-2147483648", 11), error) == -1)
				return ;
			(*ag_cnt) += 11;
			return ;
		}
		if (error_check(write(1, "-", 1), error) == -1)
			return ;
		(*i_tmp) *= -1;
		(*ag_cnt)++;
	}
}

void	print_int(va_list target, int *ag_cnt, int *error)
{
	int				i_tmp;
	char			stack[100];
	int				i;

	i = 0;
	i_tmp = va_arg(target, int);
	if (i_tmp == 0)
	{
		not_plus_case(0, &i_tmp, error, ag_cnt);
		return ;
	}
	if (i_tmp < 0)
		not_plus_case(-1, &i_tmp, error, ag_cnt);
	while (i_tmp > 0)
	{
		stack[i++] = "0123456789"[i_tmp % 10];
		i_tmp = i_tmp / 10;
	}
	if (print_stack(i, stack, error, ag_cnt) == -1)
		return ;
}

void	print_unint(va_list target, int *ag_cnt, int *error)
{
	unsigned int	l_tmp;
	char			stack[100];
	int				i;

	i = 0;
	l_tmp = va_arg(target, unsigned int);
	if (l_tmp == 0)
	{
		if (error_check(write(1, "0", 1), error) == -1)
			return ;
		(*ag_cnt)++;
		return ;
	}
	while (l_tmp > 0)
	{
		stack[i] = "0123456789"[l_tmp % 10];
		i++;
		l_tmp = l_tmp / 10;
	}
	if (print_stack(i, stack, error, ag_cnt) == -1)
		return ;
}

void	print_x(va_list target, int size, int *ag_cnt, int *error)
{
	unsigned int	u_tmp;
	char			stack[100];
	int				i;

	i = 0;
	u_tmp = va_arg(target, unsigned int);
	if (u_tmp == 0)
	{
		if (error_check(write(1, "0", 1), error) == -1)
			return ;
		(*ag_cnt)++;
		return ;
	}
	while (u_tmp > 0)
	{
		stack[i] = "0123456789abcdef"[u_tmp % 16];
		if (ft_isalpha(stack[i]) == 1)
			stack[i] -= size;
		i++;
		u_tmp = u_tmp / 16;
	}
	if (print_stack(i, stack, error, ag_cnt) == -1)
		return ;
}
