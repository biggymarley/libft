/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 05:09:56 by afaragi           #+#    #+#             */
/*   Updated: 2019/04/22 17:13:44 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *m;

	m = ft_memalloc(size + 1);
	if (m == NULL)
		return (NULL);
	else
		ft_memset(m, '\0', (size + 1));
	return (m);
}
