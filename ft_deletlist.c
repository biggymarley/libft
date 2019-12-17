/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deletlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <afaragi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 20:48:47 by afaragi           #+#    #+#             */
/*   Updated: 2019/12/16 20:54:19 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_deletlist(t_list **alst, void (*del)(void *, size_t ,void *))
{
	t_list	*li;

	if (alst)
	{
		while (*alst)
		{
			li = (*alst)->next;
			ft_deletone(&(*alst), del);
			*alst = li;
		}
	}
}
