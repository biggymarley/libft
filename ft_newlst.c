/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaragi <afaragi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 01:40:42 by afaragi           #+#    #+#             */
/*   Updated: 2019/11/22 04:34:29 by afaragi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_newlst(char *content, size_t content_size , struct stat st)
{
	t_list	*list;
	if (!(list = (t_list *)(ft_memalloc(sizeof(t_list)))))
		return (NULL);
	if (content)
	{
		//if (!(list->content = (char *)malloc(sizeof(char) * content_size)))
		 //	return (NULL);
		 //ft_memcpy(list->content, content, content_size);
		list->content = ft_strdup(content);
		list->content_size = content_size;
		list->st = st;
	}	
	else
	{
		list->content_size = 0;
		list->content = NULL;
	}
	list->next = NULL;
	return (list);
}

// t_list			*ft_sort_list(t_list *root, char *content, size_t content_size, struct stat st)
// {
// 	if (root == NULL)
// 	{
// 		root = ft_newlst(content, content_size, st);
// 		return (root);
// 	}
// 	else if (ft_strcmp(content, root->content)
// }