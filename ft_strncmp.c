/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:43:47 by afaragi           #+#    #+#             */
/*   Updated: 2019/04/30 05:39:24 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1[i] && !s2[i])
		return (0);
	if (!s1[i])
		return (-1);
	if (!s2[i] && n == 0)
		return (0);
	if (!s2[i])
		return (1);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
	}
	return (0);
}
