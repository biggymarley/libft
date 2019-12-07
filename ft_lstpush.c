/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 01:16:56 by afaragi           #+#    #+#             */
/*   Updated: 2019/09/21 20:09:33 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstpush(t_list **alst, t_list *new)
{
	t_list *head;

	head = *alst;
	if (!(head->content))
	{
		free(*alst);
		return (new);
	}
	else
	{
		while (head->next)
		{
			head = head->next;
		}
		head->next = new;
		new = NULL;
		return (*alst);
	}
}
