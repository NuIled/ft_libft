/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:07:24 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/01 09:57:46 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	b;
	char	*p;
	char	*d;

	i = ft_strlen (s2) + ft_strlen (s1) + 1;
	d = malloc(i);
	if (d == 0)
		return (NULL);
	d = ft_memmove (d, s1, i);
	b = ft_strlen (d);
	p = d;
	d = &d[b];
	d = ft_memmove(d, s2, i - b);
	return (p);
}
