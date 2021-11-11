/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:27:05 by nandre-f          #+#    #+#             */
/*   Updated: 2021/11/11 10:36:18 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t len)
{
    size_t destsize;
    size_t i;

    if (len <= ft_strlen(dest))
        return (len + ft_strlen(src));
    destsize = ft_strlen(dest);
    i = 0;
    while (src[i] != '\0' && destsize + 1 < len)
    {
        dest[destsize] = src[i];
        destsize++;
        i++;
    }
    return (ft_strlen(dest) + ft_strlen(&src[i]));
}