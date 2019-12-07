/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remplir.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 01:43:11 by afaragi           #+#    #+#             */
/*   Updated: 2019/04/24 01:43:56 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_remplir(char *dest, char const *src, int start, int end)
{
	int i;

	i = 0;
	if (src)
	{
		while (start <= end)
			dest[i++] = src[start++];
		dest[i] = '\0';
	}
}
