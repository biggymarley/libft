/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:13:30 by afaragi           #+#    #+#             */
/*   Updated: 2019/04/24 01:27:20 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t l)
{
	size_t	i;

	i = 0;
	if (s1 && s2)
	{
		while ((s1[i] || s2[i]) && i < l)
		{
			if (s1[i] > s2[i])
				return (0);
			if (s1[i] < s2[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
		return (0);
}
