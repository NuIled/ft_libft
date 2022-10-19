/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:53 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/19 22:49:08 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    i = 0;
    unsigned char* aa;
    aa = dest;
    
    unsigned char* ab;
    ab = src;
    size_t lensrc;
        size_t lendst;
lendst = strlen(dest);
            lensrc = 1;

    // if (n > lensrc)
    //     return(ab);
          lendst =0;

    while ( n  > lensrc)
    {
        aa [lendst] = ab[lensrc];
        lendst++;
        lensrc++;
    }
    return(aa);
    
}
// int main()
// {
//     char a [11]= "101010";
//     char b [10]= "44444";
//    printf ("%s",ft_memmove(a,b,3));
//     printf ("\n %s",memmove(a,b,3));
    
// }