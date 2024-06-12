#include "ft_printf.h"

int	error_check(int return_value, int *flag)
{
	if (return_value == -1)
	{
		((*flag) = return_value);
		return (-1);
	}
	return (0);
}

int	print_stack(int i, char *stack, int *error, int *arg_count)
{
	i--;
	while (i >= 0)
	{
		if (error_check(write(1, &stack[i], 1), error) == -1)
			return (-1);
		(*arg_count)++;
		i--;
	}
	return (0);
}
