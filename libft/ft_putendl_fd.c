#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	int	slen;

	slen = ft_strlen(s);
	write(fd, s, slen);
	write(fd, "\n", 1);
}