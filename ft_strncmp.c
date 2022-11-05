/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:08:46 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/01 12:25:49 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t			i;
	unsigned char	*str0;
	unsigned char	*str3;

	str0 = (unsigned char *)(str1);
	str3 = (unsigned char *)(str2);
	i = 0;
	while ((str0[i] || str3[i]) && i < num)
	{
		if (str0[i] > str3[i])
			return (1);
		else if (str0[i] < str3[i])
			return (-1);
		i++;
	}
	return (0);
}
