/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 01:03:21 by afaragi           #+#    #+#             */
/*   Updated: 2019/04/06 00:28:44 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	ok;

	i = 0;
	s = (unsigned char *)str;
	ok = (unsigned char)c;
	while (i < n)
	{
		if (s[i] == ok)
			return (&s[i]);
		else
			i++;
	}
	return (NULL);
}
