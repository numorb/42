/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:05:03 by bnunez-m          #+#    #+#             */
/*   Updated: 2022/12/13 19:05:15 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

/*int main(void)
{
    char s[] = "Mira la casa";
    char c = 'c';
    int n = 10;

    void *p = ft_memchr(s, c, n);
    printf("%s", (char*)p);
    void *pp = ft_memchr(s, c, n);
    printf("__%s", (char*)pp);
    return (0);
}*/