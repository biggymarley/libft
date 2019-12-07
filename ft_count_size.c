/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 01:35:28 by afaragi           #+#    #+#             */
/*   Updated: 2019/04/24 01:36:05 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_size(char const *s)
{
	int i;
	int j;
	int count_size;

	i = 0;
	j = 0;
	if (s)
	{
		count_size = 0;
		while (s[j])
			j++;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		j--;
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		while (i <= j)
		{
			count_size++;
			i++;
		}
		return (count_size);
	}
	return (0);
}
