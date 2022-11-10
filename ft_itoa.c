/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:05:56 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/10 01:49:37 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	minicalc(long n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		if (n < 0)
		{
			n = n * -1;
			size++;
		}
		if (n)
		{
			n = (n / 10);
			size++;
		}
	}
	return (size);
}

static char	*func(char *d, long nb, int c)
{
	while (nb > 0)
	{
		d[c] = '\0';
		c--;
		while (nb)
		{
			d[c] = (nb % 10) + '0';
			nb /= 10;
			c--;
		}
	}
	return (d);
}

char	*ft_itoa(int n)
{
	char	*d;
	int		c;
	long	nb;

	nb = n;
	c = minicalc(nb);
	d = (char *) malloc(sizeof(char) * (c + 1));
	if (d == 0)
		return (NULL);
	if (0 == nb)
	{
		d[0] = '0';
		d[c] = '\0';
	}
	else if (nb < 0)
	{
			nb = nb * -1;
			d[0] = '-';
	}
	d = func(d, nb, c);
	return (d);
}
