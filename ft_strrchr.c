/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:09:25 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/05 20:33:24 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char 	k;
	
	k = (char) c;
	str = (char *)(s);
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == k)
			return (&str[i]);
		i--;
	}
	if (str[i] == '\0' && k == '\0')
		return (&str[i]);
	return (NULL);
}

// int main ()
// {
// 	char *src = "abbbbbbbb";
//         char *d1 = strrchr(src, 'a');
//         char *d2 = ft_strrchr(src, 'a');
// 		printf("%s",d2);
// 		printf("\n%s",d1);

// }