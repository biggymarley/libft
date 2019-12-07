/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 00:30:10 by afaragi           #+#    #+#             */
/*   Updated: 2019/04/09 03:44:44 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		c;
	char	*d;

	c = ft_strlen(s);
	if (!(d = (char *)malloc(sizeof(char) * (c + 1))))
		return (NULL);
	ft_memcpy(d, s, c);
	d[c++] = '\0';
	return (d);
}
