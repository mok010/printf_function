#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// int main(void)
// {
// 	ft_putendl_fd("", 2);
// }