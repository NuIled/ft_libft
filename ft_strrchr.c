/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:09:25 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/07 23:48:27 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	k;

	k = (unsigned)(char)c;
	str = (char *)(s);
	i = ft_strlen(str);
	if (str == '\0' && k == '\0')
		return (&str[i]);
	while (i >= 0)
	{
		if (str[i] == k)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
