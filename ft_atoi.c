/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:29:20 by nandre-f          #+#    #+#             */
/*   Updated: 2022/01/24 11:18:40 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int atoi(const char *str)
{
    int a;
    int neg;
    int result;

    a = 0;
    result = 0;

    while (str[a] == ' ' || str[a] == '\n' || str[a] == '\t' || str[a] == '\v' || str[a] == '\f' || str[a] == '\r')
        a++;
    while (str[a] == '+' || str[a] == '-')
    {
        if (str[a] == '-')
            neg = -1;
        a++;
    }
    while (str[a] >= '0' && str[a] <= '9')
    {
       result = (result * 10) + (str[a] - '0');
       a++;
    } 
    return (result * neg);
}