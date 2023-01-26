/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:46:32 by bnunez-m          #+#    #+#             */
/*   Updated: 2022/12/14 20:01:14 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		*((char *)(dest + i)) = *((char *)(src + i));
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char src1[] = "Empezamos otra vez";
	char dest1[] = "A ver si terminamos";
	
	char src2[] = "Empezamos otra vez";
	char dest2[] = "A ver si terminamos";

	ft_memcpy(dest1, src1, 5);
	printf("%s", dest1);
	memcpy(dest2, src2, 5);
	printf("_%s", dest2);
	return (0);
}*/
