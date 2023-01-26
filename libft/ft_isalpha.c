/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:34:12 by bnunez-m          #+#    #+#             */
/*   Updated: 2022/11/30 21:05:20 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1024);
	}
	else
		return (0);
}

/*int	main(void)
{
	int	var1;

	var1 = 255;
	printf("%d",ft_isalpha(var1));
	printf("_%d", isalpha(var1));
	return (0);
}*/
