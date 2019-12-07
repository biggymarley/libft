/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 01:19:34 by afaragi           #+#    #+#             */
/*   Updated: 2019/05/01 05:03:36 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				s;
	unsigned int	r;
	char			*str1;

	i = 0;
	s = 1;
	r = 0;
	str1 = ft_isspace(str);
	if (str1[i])
	{
		if (str1[i] == '-' || str1[i] == '+')
		{
			if (str1[i] == '-')
				s = -1;
			i++;
		}
		while (str1[i] >= '0' && str1[i] <= '9')
		{
			r = (r * 10) + (str1[i++] - '0');
		}
	}
	return ((int)r * s);
}
