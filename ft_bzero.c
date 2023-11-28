//rellena la memoria de ceros.
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i++ < n)
		*(unsigned char *)s++ = 0;
}
/*#include <stdio.h>
int	main()
{
//	char *str = strdup("chumacho");
	char	str[10] = "Hola!123";
	ft_bzero(str, sizeof(str));

	printf("%s\n", str);
	return (0);
}*/
