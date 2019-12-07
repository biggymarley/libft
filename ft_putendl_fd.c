/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:28:06 by afaragi           #+#    #+#             */
/*   Updated: 2019/04/10 20:38:25 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
		ft_putchar_fd('\n', fd);
	}
}
