/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandre-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:52:54 by nandre-f          #+#    #+#             */
/*   Updated: 2021/11/09 16:57:26 by nandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen (char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}
