#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int	main()
{
	int	i = 65;
	ft_putchar_fd(i, 1);
}*/
