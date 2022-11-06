/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:06:58 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/06 01:03:45 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	k;

	str = (char *)(s);
	k = (char) c;
	i = 0;
	while (str[i])
	{
		if (str[i] == k)
		{
			return (&str[i]);
		}
		i++;
	}
	if (str[i] == '\0' && k == '\0')
	{
		return (&str[i]);
	}
	return (0);
}
