#include "libft.h"
#include <stdlib.h>

size_t	ft_intlen(int n)
{
    int i;

    i = 0;
    if (n == 0)
        return 1;
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

void ft_strrev(char *s)
{
    int i;
    int slen;
    char temp;

    i = 0;
    slen = ft_strlen(s);
    while (i < slen / 2)
    {
        temp = s[i];
        s[i] = s[slen - i - 1];
        s[slen - i - 1] = temp;
        i++;
    }
}

char *ft_itoa(int n)
{
    char    *p;
    int     nlen;
    int     i;
    int     neg;

    i = 0;
    neg = 0;
    if (n == 0)
    {
        p = (char *)malloc(sizeof(char)*2);
        if (p == NULL) return NULL;
        p[0] = '0';
        p[1] = '\0';
        return (p);
    }
    if (n == -2147483648)
    {
        p = (char *)malloc(sizeof(char)*12);
        if (p == NULL) return NULL;
        p[0] = '-';
        p[1] = '2';
        p[2] = '1';
        p[3] = '4';
        p[4] = '7';
        p[5] = '4';
        p[6] = '8';
        p[7] = '3';
        p[8] = '6';
        p[9] = '4';
        p[10] = '8';
        p[11] = '\0';
        return (p);
    }
    if (n < 0)
    {
        neg = 1;
        n = -n;
    }
    nlen = ft_intlen(n);
    p = (char *)malloc(sizeof(char)*(nlen + neg + 1));
    if (p == NULL) return NULL;
    while (n > 0)
    {
        p[i++] = n % 10 + '0';
        n = n / 10;
    }
    if (neg)
        p[i++] = '-';
    p[i] = '\0';
    ft_strrev(p);
    return (p);
}
