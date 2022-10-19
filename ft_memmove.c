/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:53 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/19 20:10:25 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    i = 0;

    size_t lensrc;
    size_t lendst;

    lendst = ft_strlen(dest);
    lensrc = ft_strlen (src);
    while (*dest && *src && n <= lendst -1 )
    {
        dest[lendst] = src[lensrc]
        lendst++;
        lensrc++;
        return(lendst)
    }
    return(0);
}
