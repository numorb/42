/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:49:20 by bnunez-m          #+#    #+#             */
/*   Updated: 2023/01/16 14:53:10 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (src == dest)
		return (dest);
	if (d > s && d < s + n)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	else if (s > d)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}

/*int main(void)
{
	char src[10]="abcdefghij";
	char dest[10]="1234567890";

	ft_memmove(dest, src + 5, 5);
	printf("%s", dest);
	memmove(dest, src + 5, 5);
	printf("__%s", dest);
	return (0);
}*/
