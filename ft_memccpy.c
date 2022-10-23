/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 02:58:15 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/22 05:16:25 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;
    i = 0;
    unsigned char* d;
    d = (unsigned char*)(dst);
    unsigned char* s;
    s = (unsigned char*)(src);
    if (d == '\0' && s == '\0')
            return(NULL);
    if (d < s)
    {
        while (n)
        {
            n--;
         d[n] = s[n];
        }
    }
    else while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (d);
}
