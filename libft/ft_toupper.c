#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int main(void)
{
    unsigned char a = 'i';
    printf("%c", ft_toupper(a));
    printf("__%c", toupper(a));
    return (0);
}*/