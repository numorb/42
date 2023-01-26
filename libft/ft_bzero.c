/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:18:12 by bnunez-m          #+#    #+#             */
/*   Updated: 2022/12/14 19:44:12 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)(s + i)) = 0;
		i++;
	}
}

/*int	main(void)
{
	char s1[] = "La loca";
	char s2[] = "La loca";

	ft_bzero(s1, 12);
	printf("%s", s1);
	bzero(s2, 12);
	printf("_%s", s2);
	return (0);
}*/
