/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:18:08 by afaragi           #+#    #+#             */
/*   Updated: 2019/04/06 01:29:55 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t m;
	size_t n;

	n = ft_strlen(dst);
	m = ft_strlen(src);
	if (size <= n)
		return (size + m);
	else
		ft_strncat(dst, src, size - n - 1);
	return (n + m);
}
