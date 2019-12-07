/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:20:34 by afaragi           #+#    #+#             */
/*   Updated: 2019/05/03 23:49:17 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**r;
	int		i;
	int		flag;
	int		m;

	i = -1;
	flag = 1;
	m = 0;
	if (!s)
		return (NULL);
	if (!(r = (char **)malloc(sizeof(char *) * ft_countw(s, c) + 1)))
		return (NULL);
	r[ft_countw(s, c)] = NULL;
	while (s[++i])
		if (s[i] != c && flag == 1)
		{
			if (!(r[m] = (char *)malloc(sizeof(char) * ft_ctc(s + i, c) + 1)))
				return (NULL);
			ft_cremplire(r[m], s + i, c);
			m++;
			flag = 0;
		}
		else if (s[i] == c)
			flag = 1;
	return (r);
}
