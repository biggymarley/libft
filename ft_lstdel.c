/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 01:08:52 by afaragi           #+#    #+#             */
/*   Updated: 2019/05/01 04:57:16 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*li;

	if (alst)
	{
		while (*alst)
		{
			li = (*alst)->next;
			ft_lstdelone(&(*alst), del);
			*alst = li;
		}
	}
}
