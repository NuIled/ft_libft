#include "libft.h"
#include <string.h>
#include <stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    unsigned char b;
    b = c;
    unsigned char * l;
    l = (unsigned char *)s;
    i = 0;
    size_t ls;

    ls = ft_strlen(s);
    while (l[i] && n >= ls-1)
    {
        if(l[i]== b)
            return (&l[i]);
        i++;
    }
    if(b =='\0'&&l[i]== '\0')
            return (&l[i]);
    return (NULL);
}
// int main ()
// {
//     char a[]="/|\x12\xff\x09\0\x42\042\0\42|\\";
//      printf("%s",ft_memchr(a,'\0',12));
//      printf("\n %s",memchr(a,'\0',12));
//  }
