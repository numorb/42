#include "libft.h"
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *p;
    size_t  slen;

    if (!s)
        return (NULL);
    slen = ft_strlen(s);
    if (start >= slen)
    {
        p = (char *)malloc(sizeof(char));
        if (!p)
            return (NULL);
        *p = '\0';
        return (p);
    }
    if (slen - start < len)
        len = slen - start;
    p = (char *)malloc(sizeof(char) * (len + 1));
    if (p)
    {
        ft_memcpy(p, &s[start], len);
        p[len] = '\0';
        return (p);
    }
    return (NULL);
}
