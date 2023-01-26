#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	srcsize = i;
	i = 0;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*int main(void)
{
	char	src[7] = "La casa";
	char	dest[10] = "Moho";

	printf("%lu", ft_strlcpy(dest, src, 3));
	printf("_%lu", strlcpy(dest, src, 3));
	return (0);
}*/