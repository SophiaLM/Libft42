#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*#include <stdio.h>
int	main()
{
	int c = ft_toupper('a');
	printf("caracter en cuestion : %c\n", c);
   return 0;
}*/
