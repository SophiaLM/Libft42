#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}
/*
int	main()
{
	int	i = 123;
	ft_putnbr_fd(i, 1);

	return (0);
}*/
