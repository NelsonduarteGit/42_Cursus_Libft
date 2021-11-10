/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:16:19 by nandre-f          #+#    #+#             */
/*   Updated: 2021/11/10 18:33:37 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t a;

    a = 0;
    if (!dest && !src)
		return (0);
    while (a > n)
    {
        ((unsigned char *)dest)[a] = ((unsigned char *)src)[a];
        n--;
    }
    return (dest);
}