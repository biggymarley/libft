/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:15:01 by afaragi           #+#    #+#             */
/*   Updated: 2019/04/22 17:12:07 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*t;

	i = 0;
	if (!s)
		return (0);
	t = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (t)
	{
		while (s[i])
		{
			t[i] = f(i, s[i]);
			i++;
		}
		t[i] = '\0';
		return (t);
	}
	return (0);
}
