#include "libft.h"

static void	ft_loop(unsigned int n, int fd)
{
	char	ch;

	ch = n % 10 + '0';
	if (n >= 10)
		ft_loop(n / 10, fd);
	write(fd, &ch, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		write(fd, "-", 1);
		n += 1;
		n *= -1;
		num = n;
		num += 1;
	}
	else
		num = n;
	ft_loop(num, fd);
}

// int main(void)
// {
//     ft_putnbr_fd(-2147483648, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-12345, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(2147483647, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(0, 1);
// }