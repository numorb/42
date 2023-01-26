/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:56:54 by bnunez-m          #+#    #+#             */
/*   Updated: 2022/12/14 19:16:52 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)(src + i)) = (char)c;
		i++;
	}
	return (src);
}

/* int	main(void)
{
	char	src1[4];
	char	src2[4];

	ft_memset(src1, '0', 4);
	printf("%s", src1);
	memset(src2, '0', 4);
	printf("_%s", src2);
	return (0);
} */