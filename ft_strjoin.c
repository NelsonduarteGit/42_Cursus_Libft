/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:47:36 by nandre-f          #+#    #+#             */
/*   Updated: 2022/01/24 17:59:14 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *newStr;
    size_t  i;
    size_t  j;

    newStr = (char *)malloc(ft_strlen(s1) +  ft_strlen(s2) + 1);
    if (!s1 || !s2 || !newStr)
        return (0);
    i = 0;
    while (s1)
        newStr[i++] = s1[i++];
    j = 0;
    while (s2)
        newStr[i++] = s2[j++];
    newStr[i] = "\0";
    return (newStr);
}