/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:06:11 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/30 10:06:12 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *b, int c, size_t n)
{
	size_t i;
	i = 0;
	char *d;
	// unsigned char cl;
	// // cl = unsigned char (c);
	d = (char *)(b);
	while (n > i)
	{
		d[i] = (unsigned char)c;
		i++;
	}
	return(d);
}
