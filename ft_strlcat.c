/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:07:33 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/10 02:06:05 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	lendst;
	size_t	i;

	i = 0;
	if (!dst && !n)
		return (ft_strlen(src));
	if (!dst)
		return (ft_strlen(dst));
	lendst = ft_strlen(dst);
	if (n < ft_strlen(dst))
		return (ft_strlen(src) + n);
	while (lendst + 1 < n && src[i])
	{
		dst[lendst] = src[i];
		lendst++;
		i++;
	}
	dst[lendst] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
