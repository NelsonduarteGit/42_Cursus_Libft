/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:49:39 by nandre-f          #+#    #+#             */
/*   Updated: 2022/03/18 19:50:19 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*savenode;
	t_list	*newlist;
	t_list	*newnode;

	savenode = lst;
	newlist = NULL;
	while (savenode)
	{
		newnode = ft_lstnew(f(savenode->content));
		if (newnode == NULL)
		{
			ft_lstclear(&newlist, del);
			return ((void *)(0));
		}
		ft_lstadd_back(&newlist, newnode);
		savenode = savenode->next;
	}
	newnode = NULL;
	return (newlist);
}