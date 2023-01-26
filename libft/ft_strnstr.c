/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:56:03 by bnunez-m          #+#    #+#             */
/*   Updated: 2023/01/16 14:56:07 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	pos;
	unsigned int	i;

	pos = 0;
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[pos] && (size_t)pos < len)
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (needle[i] != '\0' && haystack[pos + i] == needle[i]
				&& (size_t)(pos + i) < len)
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[pos]);
		}
		pos++;
	}
	return (0);
}

/*int	main(void)
{
	char	haystack[] = "intentando continuar";
	char	needle[] = "conti";
	int	n;

	n = 20;
	printf("%s", ft_strnstr(haystack, needle, n));
	printf("__%s", strnstr(haystack, needle, n));
	return (0);
}*/
