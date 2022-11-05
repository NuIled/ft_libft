/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:05:59 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/01 12:10:20 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*l;
	unsigned char	b;

	b = c;
	l = (unsigned char *)(s);
	i = 0;
	while (n > i)
	{
		if (l[i] == b)
			return (&l[i]);
		i++;
	}
	return (NULL);
}
