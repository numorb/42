/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:57:48 by bnunez-m          #+#    #+#             */
/*   Updated: 2023/01/16 14:58:52 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n)
	{
		if (*s1 != *s2++)
			return (*(unsigned char *)s1 - *(unsigned char *)--s2);
		if (!*s1++)
			return (0);
		n--;
	}
	return (0);
}

/*int main(void)
{ 
    char    s1[] = "La casa no se cae";
    char    s2[] = "La casa se cae";
    int n;

    n = 9;
    printf("%i", ft_strncmp(s1, s2, n));
    printf("__%i", strncmp(s1, s2, n));
    return (0);
}*/
