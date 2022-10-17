#include <stdio.h>
#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{

size_t len_dst;
size_t len_src;
len_src = ft_strlen(src); 
len_dst = ft_strlen(dst);  
if (dstsize - 1 < len_dst)
    return (dstsize + len_src);
len_src = 0;
    while (src[len_src])
    {
      dst[len_dst] = src[len_src];
      len_dst++;
      len_src++;
    }
  return (len_dst);
}
// int main()
// {
//   char src [5]  = "abv";
//   char dst [10]  = "ccc4124";
//   //  printf("\nAfter Swapping: = %zu", strlcdat(dst, src,11));
//  printf("\nAfter Swapping: = %lu", strlcdat(dst, src,1));

//   //printf("\nSwapping: = %lu\n", strlcat(dst, src, 1));
// }