#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
    char	*p;
    int	i;

    i = 0;
    while (s1[i])
        i++;
    p = (char *)malloc((i + 1) * sizeof(char));
    if (!p)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        p[i] = s1[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}
