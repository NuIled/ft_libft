/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:12:46 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/10 02:03:16 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **ptr, int i)
{
	while (i)
	{
		free (ptr[i]);
		i--;
	}
	free(ptr);
}

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

static int	charar(const char *s, char c)
{
	int	n;

	n = 0;
	while (*s != c)
	{
		n++;
		s++;
		if (*s == '\0')
			break ;
	}
	return (n);
}

char	**loop(char **d, char const *s, char c)
{
	int		j;

	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		d[j] = ft_substr(s, 0, charar(s, c));
		if (!d[j])
		{
			ft_free (d, word(s, c) + 1);
			return (NULL);
		}
		j++;
		s = s + charar (s, c);
	}
	d[j] = NULL;
	return (d);
}

char	**ft_split(char const *s, char c)
{
	char	**d;

	if (!s)
		return (NULL);
	d = (char **)malloc(sizeof(char *) * (word(s, c) + 1));
	if (!d)
		return (NULL);
	loop(d, s, c);
	return (d);
}
