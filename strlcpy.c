#include <stdio.h>
#include <string.h>
size_t strvlen(const char *s)
{
    int i;
    i = 0;

    while (s[i])
        i++;
    return (i);
}
size_t strlcdpy(char * dst, const char * src, size_t dstsize)
 {

size_t len_dst;
size_t len_src;
len_dst = 0;  
len_src = 0;
    while (src[len_src]&&dstsize >=0 )
    {
      dst[len_dst] = src[len_src];
      len_dst++;
      len_src++;
    }
  return (len_src);
}
 int main()
{
  char src [10]  = "11";
  char dst [10]  = "1010";
  //  printf("\nAfter Swapping: = %zu", strlcdat(dst, src,11));
 printf("\nAfter Swapping: = %lu", strlcdpy(dst, src,11));

 // printf("\nSwapping: = %lu\n", strlcpy(dst, src,0));
}