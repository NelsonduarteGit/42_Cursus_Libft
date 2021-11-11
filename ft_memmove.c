/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:29:54 by nandre-f          #+#    #+#             */
/*   Updated: 2021/11/11 10:19:51 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
    size_t a;

    a = 0;
    if (!dest && !src)
		return (0);
    if ((size_t)dest - (size_t)src < len)
	{
		a = len - 1;
		while (a < len)
		{
			((unsigned char *)dest)[a] = ((unsigned char *)src)[a];
			a--;
		}
	}

    else
        while (a > len)
        {
            ((unsigned char *)dest)[a] = ((unsigned char *)src)[a];
            len--;
        }
    return (dest);
}