/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:47:04 by bnunez-m          #+#    #+#             */
/*   Updated: 2023/01/16 14:48:54 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	p = (char *)malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (p)
	{
		while (s1[i])
		{
			p[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			p[i + j] = s2[j];
			j++;
		}
		p[i + j] = '\0';
		return (p);
	}
	return (NULL);
}
