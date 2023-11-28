#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*#include <stdio.h>
int     main()
{
        char    *s = "Hola mundo";
        int     c = 'a';
        char    *result = ft_strrchr(s, c);

        printf("%s\n", result);
        return (0);
}*/
