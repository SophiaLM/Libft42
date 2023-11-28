#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
			write(fd, &s[i++], 1);
	}
}

/*int	main()
{
	char	*s = "hola";
	ft_putstr_fd(s, 1);

	return (0);
}*/
