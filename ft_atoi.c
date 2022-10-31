/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:05:21 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/31 11:40:28 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int    ft_atoi(const char *str)
{
    unsigned long i;
    int sign;
    int b;

    i = 0;
    b = 0;
    sign = 1;
    while (str[b]== 32|| str[b]<= 9 || str[b]<= 13)
        b++;
    if (str[b]==45)
    {
        sign = -1;
        b++;
    }
    else if(str[b]=='+')
        b++;
     while (str[b]>='0' && str[b]<='9')
        {
            i = (i * 10) + ((str[b]) - '0');
        b++;
        }
    if (i >9223372036854775807 && sign == 1)
        return (-1);
    else if (i > 9223372036854775807 && sign == -1)
        return (0);
    return ((i * sign));


}
