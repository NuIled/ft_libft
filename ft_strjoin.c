/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:07:24 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/07 23:47:06 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s = (char *)malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (!s)
		return (NULL);
	while (*s1 != '\0')
	{
		s[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		s[i] = *s2;
		i++;
		s2++;
	}
	s[i] = '\0';
	return (s);
}
