/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:39:15 by bnunez-m          #+#    #+#             */
/*   Updated: 2023/01/16 14:39:18 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

/*int main(void)
{
    char    str[]="Los capricornio";
    char    *find1 = ft_strchr(str, 'a');
    char    *find2 = strchr(str, 'a');

    printf("%s", find1);
    printf("__%s", find2);
    return (0);
}*/
