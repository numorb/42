#include "libft.h"
#include <stdlib.h>

char *ft_strnew(size_t size)
{
    char *str;
    size_t i;

    str = (char *)malloc(sizeof(char) * (size + 1));
    if (str == NULL)
        return (NULL);
    i = 0;
    while (i <= size)
    {
        str[i] = '\0';
        i++;
    }
    return (str);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new_s;
    size_t i;

    if (!s)
        return (NULL);
    new_s = ft_strnew(ft_strlen(s));
    if (!new_s)
        return (NULL);
    i = 0;
    while (s[i])
    {
        new_s[i] = f(i, s[i]);
        i++;
    }
    return (new_s);
}
