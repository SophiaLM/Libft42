//elimina los caracteres inciales y finales del str 
//que set diga.
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j] && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, (j - i + 1)));
}
/*#include <stdio.h>
int	main()
{
	char	*s1 = "  \t \t \n   \n\n\n\t";
	char	*set = "";
	char	*result = ft_strtrim(s1, set);

	printf("%s\n", result);
}*/
