#include <stdio.h>
#include "libft.h"
#include <string.h>

size_t ft_strlcat(char * dst, const char * src, size_t n)
{
  size_t lensrc;
  size_t lendst;
  size_t l;
  l = 0;
  lensrc = ft_strlen(src);
  lendst = ft_strlen(dst);
   if (n >= lendst)
      return(lendst-1);
  while (l < n)
    {
      dst[lendst] = src[l];
      l++;
      lendst++;
    }
    dst[lendst]='\0';
  return(lendst - n-1 );
}
// int main()
// {
// char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff1[0xF00] = "there is no stars in the sky";
// 	char buff2[0xF00] = "there is no stars in the sky";
// 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
//  printf("\nAfter Swapping: = %lu", ft_strlcat(buff2, str, max));
//  printf("\nAfter Swapping: = %lu", strlcat(buff2, str, max));

//   //printf("\nSwapping: = %lu\n", strlcat(dst, src, 1)) printf("\nAfter Swapping: = %lu", ft_strlcat(buff2, str, max));
// ;
// }
