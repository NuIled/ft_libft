/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:09:42 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/30 10:09:43 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *ss;
	char * d;
	if (!s && !*s)
		return ft_strdup("");
	if (start >= len)
		return ft_strdup("");
	ss = (char *)(s);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (d == 0)
		return(NULL);
	ss = &ss[start];
	ft_strlcpy(d,ss,len+1);
	return(d);
}
