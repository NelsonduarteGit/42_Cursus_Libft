/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:46:52 by nandre-f          #+#    #+#             */
/*   Updated: 2022/03/18 19:47:22 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*save;

	while (*lst != NULL)
	{
		save = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = save;
	}
	*lst = 0;
}