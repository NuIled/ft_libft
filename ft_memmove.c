/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:53 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/30 20:45:57 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    unsigned char* d;
    d = (unsigned char*)(dest);
    unsigned char* s;
    s = (unsigned char*)(src);

     if (d == '\0' && s == '\0')
            return(NULL);
     if (d > s )
    {
        while (n > 0)
        {
            --n;
        d[n] = s[n];

        }
    }
    else
    while (n > i )
    {
        d[i] = s[i];
       i++;
    }
    return(d);

}

