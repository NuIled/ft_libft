/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:06:58 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/30 10:06:59 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    char *str = (char *)(s);
    while (str[i])
    {
        if (str[i] == c )
        {
            return (&str[i]);
        }
        i++;
    }
    if (str[i] == '\0'&& c == '\0')
    {
        return (&str[i]);
    }
    return(0);
}
