/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:53:35 by nandre-f          #+#    #+#             */
/*   Updated: 2022/01/24 17:46:31 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *newStr;
    size_t  i;
    size_t  j;

    newStr = (char *)malloc(len + 1);
    if (!s || !newStr)
		return (0);
    i = start;
    j = 0;
    while (i < ft_strlen(s) && j < len)
		newStr[j++] = s[i++];
    newStr[j] = '\0';
	return (newStr);
}