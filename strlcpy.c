/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:20:16 by nandre-f          #+#    #+#             */
/*   Updated: 2021/11/11 10:26:11 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t destsize)
{
    size_t srcsize;
    size_t i;

    if (!dest || !src)
        return (0);
    srcsize = ft_strlen(src);
    i = 0;
    if (destsize != 0)
    {
        while (src[i] != '\0' && i < (destsize - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (srcsize);
}