/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:53 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/01 12:17:31 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	unsigned char *(d);
	unsigned char *(s);
	i = 0;
	d = (unsigned char *)(dest);
	s = (unsigned char *)(src);
	if (d == '\0' && s == '\0')
		return (NULL);
	if (d > s)
	{
		while (n > 0)
		{
			--n;
			d[n] = s[n];
		}
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
