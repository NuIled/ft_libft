/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:07:11 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/05 20:45:21 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1 )
{
	char	*s;
	size_t	i;

	i = ft_strlen(s1) + 1;
	s = malloc(i);
	if (s == 0)
		return (NULL);
	ft_strlcpy (s, s1, i);
	return (s);
}
