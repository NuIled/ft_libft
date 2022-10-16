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
size_t strlcdat(char * dst, const char * src, size_t dstsize)
{

size_t len_dst;
size_t len_src;
len_src = strvlen(src); 
len_dst = strvlen(dst);  
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
int main()
{
  char src [5]  = "abv";
  char dst [10]  = "ccc4124";
  //  printf("\nAfter Swapping: = %zu", strlcdat(dst, src,11));
 printf("\nAfter Swapping: = %zu", strlcdat(dst, src,3));

  //printf("\nSwapping: = %lu\n", strlcat(dst, src, 3));
}