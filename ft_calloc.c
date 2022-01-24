/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:14:43 by nandre-f          #+#    #+#             */
/*   Updated: 2022/01/24 12:07:38 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *calloc( size_t number, size_t size )
{
    void *ptr;

    ptr = (void *) malloc (number * size);
    if (!ptr)
        return (NULL);
    else
        ft_bzero(ptr, number * size);
    return (ptr);

}