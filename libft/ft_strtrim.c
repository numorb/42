/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnunez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:26:11 by bnunez-m          #+#    #+#             */
/*   Updated: 2023/01/16 14:28:48 by bnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_is_in_set(char c, char const *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*trimmed;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	while (*start && ft_is_in_set(*start, set))
		start++;
	if (!*start)
		return (ft_strdup(""));
	end = start + ft_strlen(start) - 1;
	while (ft_is_in_set(*end, set))
		end--;
	trimmed = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start <= end)
		trimmed[i++] = *start++;
	trimmed[i] = '\0';
	return (trimmed);
}
