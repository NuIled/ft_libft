/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:53 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/20 00:59:26 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>
#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    i = 0;
    unsigned char* aa;
    aa = (unsigned char*)(dest);
    unsigned char* ab;
    ab = (unsigned char*)(src);
    size_t lensrc;
        size_t lendst;
lensrc = 0;

     if (src == '\0' && dest == '\0')
            return(NULL);
   
   lendst =0;
    while ( n  > lensrc)
    {
        aa [lendst] = ab[lensrc];
        lendst++;
        lensrc++;
    }
    return(aa);
    
}
int main()
{
    char a [255]= "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
    char b [255]= "";
   printf ("%s",ft_memmove(a, b, 0));
    printf ("\n %s",memmove(a,b, 0));
    
}