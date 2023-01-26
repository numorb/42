#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	while (dst[i] != '\0')
		i++;
	dstlen = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	srclen = i;
	i = 0;
	if (size <= dstlen)
		return (srclen + size);
	if (size - dstlen - 1 > 0)
	{
		while (i < size - dstlen - 1 && src[i])
		{
			dst[dstlen + i] = src[i];
			i++;
		}
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*int main(void)
{
	char	src[7] = "La casa";
	char	dest[20] = "Moho";

	printf("%lu", ft_strlcat(dest, src, 5));
	printf("_%lu", strlcat(dest, src, 5));
	return (0);
}*/