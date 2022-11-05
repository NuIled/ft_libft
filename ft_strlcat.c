/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:07:33 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/03 20:25:27 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include  <string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t lensrc;
	size_t lendst;
	size_t i;
	
	i = 0;
	
	lendst = ft_strlen(dst);
	if (!dst)
	 		 return(ft_strlen(src));	
	if (n < ft_strlen(dst))
		 return(ft_strlen(src)+ n);
	lensrc = ft_strlen(src);
	while (lendst + 1 < n  && src[i])
	{
			dst[lendst] = src[i];
			lendst++;
			i++;
	}
			dst[lendst]= '\0';
	return(ft_strlen(dst) + ft_strlen(&src[i]));
}
// int main ()
// {
// 	char b[0]=""; 
// 	// printf("%zu",ft_strlcat(0,0,0));
// 	printf("%zu",ft_strlcat(b, "hgyy", 2));

// }