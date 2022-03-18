/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:40:17 by nandre-f          #+#    #+#             */
/*   Updated: 2022/03/18 19:45:53 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*testnode;

	if (*lst == NULL)
		*lst = new;
	else
	{
		testnode = *lst;
		while (testnode->next != NULL)
			testnode = testnode->next;
		testnode->next = new;
	}
}