/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 21:24:40 by afaragi           #+#    #+#             */
/*   Updated: 2019/05/03 22:30:19 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int nb)
{
	int				i;
	int				a;
	char			*res;
	int				n;

	i = 0;
	n = nb;
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	a = ft_intcount(nb) + 1;
	if (!(res = (char *)malloc(sizeof(char) * a)))
		return (NULL);
	ft_memset(res, 0, a);
	if (nb < 0)
		n = -nb;
	while (--a > 0)
	{
		if (nb < 0 && a == 1)
			break ;
		res[a - 1] = n % 10 + '0';
		n = n / 10;
	}
	if (nb < 0)
		res[0] = '-';
	return (res);
}
