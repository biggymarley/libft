/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <afaragi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:29:30 by afaragi           #+#    #+#             */
/*   Updated: 2019/12/17 00:40:02 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		a;
	char	*t;

	i = 0;
	j = 0;
	a = 0;
	if (!s1 || !s2)
		return (0);
	a = ft_strlen(s1) + ft_strlen(s2);
	t = (char *)malloc(sizeof(char) * a + 1);
	if (t)
	{
		while (s1[i])
		{
			t[i] = s1[i];
			i++;
		}
		while (s2[j])
			t[i++] = s2[j++];
		t[i] = '\0';
		return (t);
	}
	return (0);
}
