/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:09:06 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/01 10:11:06 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *nl, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*nl || nl == '\0')
		return ((char *)(h));
	if (n <= 0)
		return (NULL);
	while (h[i] && i < n)
	{
		j = 0;
		while (nl[j] && i + j < n)
		{
			if (h[i + j] == nl[j])
			{
				if (nl[j + 1] == '\0')
					return ((char *)h + i);
				j++;
			}
			else
				break ;
		}
		i++;
	}
	return (0);
}
