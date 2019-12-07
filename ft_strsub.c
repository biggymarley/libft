/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:50:16 by afaragi           #+#    #+#             */
/*   Updated: 2019/04/22 17:15:52 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	int		a;
	char	*t;

	i = 0;
	if (!s)
		return (0);
	a = len;
	t = (char *)malloc(sizeof(char) * a + 1);
	if (!t)
		return (0);
	while (s[start] && i < len)
		t[i++] = s[start++];
	t[i] = '\0';
	return (t);
}
