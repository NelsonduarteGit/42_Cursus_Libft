/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:57:48 by nandre-f          #+#    #+#             */
/*   Updated: 2022/03/18 19:33:12 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *dest, int c, size_t len)
{
    char    *temp;

    if (!(dest))
        return (NULL);
    temp = dest;
    while (len--)
        *temp++ = c;
    return (dest);
}