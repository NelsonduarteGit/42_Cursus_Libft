/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <nandre-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:29:54 by nandre-f          #+#    #+#             */
/*   Updated: 2022/03/21 11:58:05 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*temp;
	const char	*s;

	if (!dest && !src)
		return (NULL);
	if (dest <= src)
	{
		temp = dest;
		s = src;
		while (len--)
			*temp++ = *s++;
	}
	else
	{
		temp = dest;
		temp += len;
		s = src;
		s += len;
		while (len--)
			*--temp = *--s;
	}
	return (dest);
}
