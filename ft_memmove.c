/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 22:44:00 by afaragi           #+#    #+#             */
/*   Updated: 2019/05/02 00:33:04 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*des;

	des = (unsigned char *)dest;
	tmp = (unsigned char *)malloc(n * sizeof(unsigned char));
	ft_memcpy(tmp, src, n);
	ft_memcpy(des, tmp, n);
	free(tmp);
	return (des);
}
