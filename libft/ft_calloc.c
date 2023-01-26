/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:39:28 by bnunez-m          #+#    #+#             */
/*   Updated: 2023/01/16 14:40:15 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
