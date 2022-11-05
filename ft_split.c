/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:12:46 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/04 22:43:35 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word(const char *str, char c)
{
	size_t	i;
	int		words;

	words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] != '\0' && str[i] != c)
			words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}
// static int ft_free(char *ptr)
// {
// 	while (ptr)
// 	{
// 		free(ptr);
// 		ptr++;
// 	}
// 	return(&ptr);
// }
static char	*wordchar(const char *str, char c)
{
	int		j;
	int		i;
	char	*dst;

	j = 0 ;
	i = 0;
	while (str[i] && str[i] != c)
		i++;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (0);
	while (j < i)
	{
		dst[j] = str[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}

static char	**spp(const char *s, int fin, char **splitindex, char c)
{
	int		i;
	int		b;
	int		j;

	j = 0;
	i = 0;
	while (j < fin)
	{
		b = 0;
		while (*s && *s == c)
			s++;
		splitindex[j] = wordchar(s, c);
		if (!splitindex[j])
			return (0);
		while (*s && *s != c)
		{
			b = 1;
			s++;
		}
		if (b)
			j++;
	}
	splitindex[j] = NULL;
	return (splitindex);
}

char	**ft_split(char const *s, char c)
{
	char	**splitindex;
	int		fin;

	fin = word(s, c);
	if (!s)
		return (NULL);
	splitindex = (char **)malloc(sizeof(char *) * (word(s, c) + 1));
	if (!splitindex)
		return (NULL);
	splitindex = spp(s, fin, splitindex, c);
	return (splitindex);
}
