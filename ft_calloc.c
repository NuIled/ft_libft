/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:05:31 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/06 01:11:20 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*s;

	s = malloc(count * n);
	if (s == 0)
		return (NULL);
	ft_bzero (s, n * count);
	return (s);
}
#include <stdio.h>
int main ()
{
	
	char *s;
	s = ft_calloc(123456789,123456789);


	printf("%s",s);
}