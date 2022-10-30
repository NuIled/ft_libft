/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:05:59 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/30 10:06:00 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char b;
    b = c;
    unsigned char * l;
    l = (unsigned char *)s;
    i = 0;
    // size_t ls;
    // if(b =='\0'&& l[i]== '\0')
    //         return (&l[i]);
    // ls = ft_strlen(s);
    while (n > i)
    {
        if(l[i]== b)
            return (&l[i]);
        i++;
    }
    return (NULL);
}
