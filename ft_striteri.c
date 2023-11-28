//aplica una funcion a cada caracter de un str
//esta ves trabajamos sobre la memoria.
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
