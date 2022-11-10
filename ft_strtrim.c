/* ************************************************************************** */
/*	                                                                          */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 05:44:37 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/25 05:45:12 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l;

	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	l = ft_strlen(s1);
	while (l && ft_strchr(set, *(s1 + l)))
			l--;
	return (ft_substr(s1, 0, l + 1));
}

// int main ()
// {
// 	char *s1 = "  \t \t \n   \n\n\n\t";
//         char *s2 = "";
//         char *ret = ft_strtrim(s1, " \n\t");
// 		printf("%s",ret);
// }