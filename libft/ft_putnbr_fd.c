#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char str[12];
    int i;

	if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    i = 0;
    while (n > 9)
    {
        str[i++] = (n % 10) + '0';
        n /= 10;
    }
    str[i] = n + '0';
    while (i >= 0)
        write(fd, &str[i--], 1);
}
