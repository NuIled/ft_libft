/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:09:42 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/05 21:40:18 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	char	*d;

	if (!s && !*s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	// if (ft_strlen(s + start) < len)
	// 	len =
	ss = (char *)(s);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (d == 0)
		return (NULL);
	ss = &ss[start];
	ft_strlcpy (d, ss, len + 1);
	return (d);
}
