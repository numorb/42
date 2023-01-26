#include "libft.h"
#include <stdlib.h>

int ft_count_words(char const *s, char c)
{
    int count = 0;
    int in_word = 0;

    if (!s)
        return -1;
    while (*s)
    {
        if (*s == c)
        {
            if (in_word)
                in_word = 0;
        }
        else
        {
            if (!in_word)
            {
                in_word = 1;
                count++;
            }
        }
        s++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    char **p;
    int slen;
    int index;
    int i;
    int j;
    int k;
    int x;

    if (!s)
        return (NULL);
    slen = ft_strlen(s);
    p = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char*));
    if (!p)
        return (NULL);
    i = 0;
    j = 0;
    k = 0;
    index = -1;
    while (i <= slen)
    {
        if (s[i] != c && index < 0)
            index = i;
        else if ((s[i] == c || i == slen) && index >= 0)
        {
            p[j] = malloc((i - index + 1) * sizeof(char));
            if (!p[j])
            {
                x = 0;
                while(x < j)
                    free(p[x++]);
                free(p);
                return (NULL);
            }
            k = 0;
            while (index < i)
                p[j][k++] = s[index++];
            p[j++][k] = '\0';
            index = -1;
        }
        i++;
    }
    p[j] = 0;
    return (p);
}
