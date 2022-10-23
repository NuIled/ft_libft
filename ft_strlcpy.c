#include <stdio.h>
#include <string.h>
#include "libft.h"
size_t ft_strlcpy(char * dst, const char * src, size_t n)
{
  size_t i;
  i = 0;
  size_t lensrc;
  lensrc = ft_strlen(src);
  if (n!=0)
  {
    while (src[i] && i < n - 1)
    {
      // if (!src[i])
      //   break;
      dst[i] = src[i];
      i++;
    }
    dst[i]  = '\0';
  }
  return(lensrc);
}
//  int main()

// {
//  char *str = "hello !";
// 	char buff1[0xF00];
// 	char buff2[0xF00];
//   ft_strlcpy(buff1,str,3);
//   printf("your stlcpy : %s\n",buff1);
//   strlcpy(buff2,str,3);
//   printf("org stlcpy : %s",buff2);
//   //printf("\nAfter Swapping: = %lu", strlcpy(dst, src,sizeof(buff2)));

//  // printf("\nSwapping: = %lu\n", strlcpy(dst, src,0));
// }
