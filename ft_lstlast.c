/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <nandre-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:39:21 by nandre-f          #+#    #+#             */
/*   Updated: 2022/03/21 11:56:27 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*testnode;

	if (lst == NULL)
		return (lst);
	testnode = lst;
	while (testnode->next != NULL)
		testnode = testnode->next;
	return (testnode);
}
