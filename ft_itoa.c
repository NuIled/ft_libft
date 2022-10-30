/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:05:56 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/30 10:05:57 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int miniclalc(long n)
{
    int size;

    size = 0;

    while (n)
    {
      if(n < 0)
        {
            n = n * -1;
            size++;
        }
        if ( n )
        {
           n = (n / 10);
            size++;

        }
    }
        return size;
}

static char *ft_ret(long n)
{
    char *d;
    int c;
    c = miniclalc(n);
    d = (char *)malloc(sizeof(char)*(c+1));
    if (d == 0)
        return(NULL);
    if (0 == n )
    {
        d = (char *)malloc(sizeof(char)*(2));
        if (d == 0)
            return(NULL);
        d[0]= '0';
        d[1]= '\0';
    return d;
    }
    while (n) 
    {
        d[c]='\0';
        c--;
        if(n < 0)
        {
            n = n * -1;
            d[0]= '-';
        }
        while (n)
        {
            d[c] = ((n%10))+'0';
            n /= 10;
            c--;
        }
    }
    return(d);

}
char *ft_itoa(int n)
{    
    char *d;
    int i;

    i = 0;
    d =  ft_ret(n);
    return(d);
}

