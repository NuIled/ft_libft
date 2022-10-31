/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:12:46 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/30 20:52:09 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int word(const char *str , char c)
{
    size_t i;
    int words;

    words = 0;
    i = 0;
    while (str[i])
    {
        while (str[i] && str[i]== c)
            i++;
        if (str[i] != '\0' && str[i] != c)
            words++;
        while (str[i] && str[i]!= c)
            i++;
    }
    return words;
}
static char* wordchar(const char *str , char c)
{
    int j;
    j = 0 ;
    int i;
    i = 0;
    char *dst;
    while (str[i] && str[i] != c)
        i++;
    dst = (char *)malloc(sizeof(char) * (i + 1));
    if (!dst)
        return (0);
    while (j < i)
    {
        dst[j] = str[j];
        j++;
    }
    dst[j] = '\0';
    return dst;
}

static char **ft_spli(char const *s, char c)
{
    char    **splitindex;
    int     i;
    int     b;

    i = 0;
    int j = 0;
    if (!s)
        return (NULL);
    int fin = word(s,c);
    splitindex = (char **)malloc(sizeof(char *) * (word(s,c)+ 1));
    if(!splitindex)
        return(NULL);
    if (!*s || fin == 0)
    {

        splitindex[0] = NULL;
        return (splitindex);
    }
    while (j < fin)
    {
        b = 0;
        while (*s && *s == c)
            s++;
    
        splitindex[j] = wordchar(s,c);
        if (!splitindex[j])
            return (0);
        while (*s && *s != c)
        {
            b = 1;
            s++;
        }
        if (b)
            j++;
    }
    splitindex[j] = NULL;
    return splitindex;
}
char **ft_spli(char const *s, char c)
{
    return(ft_spli(s,c));
}

