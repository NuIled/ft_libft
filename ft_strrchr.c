/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:09:25 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/30 10:09:26 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    int i;
   // int len;
    char *str = (char *)(s);
    i = ft_strlen(str);
    while (i+1)
    {
        if (str[i] == c)
            return (&str[i]);
        i--;
    }
        if(str[i]=='\0'&& c =='\0')
        {
            return (&str[i]);
        }
    return(NULL);

}

