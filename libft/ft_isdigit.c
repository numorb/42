/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:11:12 by bnunez-m          #+#    #+#             */
/*   Updated: 2022/11/30 21:04:30 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (2048);
	}
	else
		return (0);
}

/*int	main(void)
{
	int	var1;

	var1 = 57;
	printf("%d",ft_isdigit(var1));
	printf("_%d",isdigit(var1));
	return (0);
}*/
