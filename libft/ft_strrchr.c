#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = (NULL);
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (last)
		return (last);
	if ((char)c == '\0')
		return ((char *)s);
	if(c < -128 || c > 127)
        return (NULL);
	return (NULL);
}

/*int main(void)
{
    char    str[]="Las casas colgadas";
    char    *find1 = ft_strrchr(str, 'a');
    char    *find2 = strrchr(str, 'a');

    printf("%s", find1);
    printf("__%s", find2);
    return (0);
}*/