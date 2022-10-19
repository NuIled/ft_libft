#include <stdio.h>
#include <string.h>
#include "libft.h"
size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
size_t len_dst;
size_t len_src;
     if (src == '\0')
        return(0);
    len_src = ft_strlen(src)-1;            
    if (dstsize <= 0 || dstsize >= len_src)
        return(0);
    len_dst = ft_strlen(dst)-1;
    return (len_dst+len_src);
    
  return (0);
}
 int main()
{
  char src [10]  = "";
  char dst [10]  = "1010";
  printf("\nAfter Swapping: = %lu", ft_strlcpy(dst, src,2));
  printf("\nAfter Swapping: = %lu", strlcpy(dst, src,2));

 // printf("\nSwapping: = %lu\n", strlcpy(dst, src,0));
}