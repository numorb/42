#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	char	*temp;

	p = malloc(count * size);
	temp = p;
	if (p)
	{
		while (temp < (char *)p + (count * size))
		{
			*temp = 0;
			temp++;
		}
	}
	return (p);
}