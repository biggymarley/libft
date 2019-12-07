/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 05:10:37 by afaragi           #+#    #+#             */
/*   Updated: 2019/05/01 05:04:27 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;
	char		*str1;
	char		*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	j = 0;
	if (*str2 == '\0')
		return ((char *)str1);
	while (str1[i] && i < len)
	{
		j = 0;
		while (str1[i + j] == str2[j] && str1[i + j] && (i + j) < len)
		{
			j++;
			if (str2[j] == '\0')
				return ((char *)str1 + i);
		}
		i++;
	}
	return (NULL);
}
