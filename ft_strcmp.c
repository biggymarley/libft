/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <afaragi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 08:59:35 by afaragi           #+#    #+#             */
/*   Updated: 2019/11/23 01:50:06 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	if (s1 == NULL && s2)
		return (-1);
	//if (s1 && !s2)
		//return (1);
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
	}
	return (0);
}
