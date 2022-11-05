/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:06:03 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/01 10:50:10 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)(s1);
	d = (unsigned char *)(s2);
	i = 0;
	while (i < n)
	{
		if (s[i] > d[i])
			return (s[i] - d[i]);
		else if (s[i] < d[i])
			return (s[i] - d[i]);
		i++;
	}
	return (0);
}
