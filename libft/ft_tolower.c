#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int main(void)
{
    unsigned char a = 'G';
    printf("%c", ft_tolower(a));
    printf("__%c", tolower(a));
    return (0);
}
    */