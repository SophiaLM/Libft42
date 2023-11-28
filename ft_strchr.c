#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*#include <stdio.h>
int	main()
{
	char	*s = "Hola mundo";
	int	c = 'm';
	char	*result = ft_strchr(s, c);

	printf("%s\n", result);
	return (0);
}*/
