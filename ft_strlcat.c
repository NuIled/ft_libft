/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:07:33 by aoutifra          #+#    #+#             */
/*   Updated: 2022/10/30 10:08:08 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t n)
{
  size_t lensrc;
  size_t lendst;
  size_t i;
  i = 0;
  // char s;
  // s = (char *)(src);
  lensrc = ft_strlen(src);
  if (n == 0)
       return(lensrc);
  lendst = ft_strlen(dst);
  if (n < lendst)
    return(lensrc + n);
  while (n > lendst && src[i])
  {
      dst[lendst + i] = src[i];
      i++;
  }
  if (lendst + i < n)
    dst[lendst + i] = '\0';
  return (lendst + i);
}
