/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:01:35 by afaragi           #+#    #+#             */
/*   Updated: 2019/04/22 17:11:33 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*t;

	i = 0;
	if (!(s))
		return (0);
	t = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!(t))
		return (0);
	if (t)
	{
		while (s[i])
		{
			t[i] = f(s[i]);
			i++;
		}
		t[i] = '\0';
		return (t);
	}
	return (0);
}
