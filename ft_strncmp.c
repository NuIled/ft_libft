#include "libft.h"
#include <stdio.h>

int ft_strncmp ( const char * str1, const char * str2, size_t num )
{
    int i;
    i =0;
    size_t str1len;
    str1len = ft_strlen(str1);
    while (str1[i]&& num < str1len)
    {
        if (str1[i]==str2[i])
            i++;
        else if (str1[i] > str2[i])
            return(1);
        else if (str1[i] < str2[i])
            return(-1);
    }
    return(0);
}
// /*int main()
// {
//     char b[]="asda";
//      char a[]="asdasd";
//    // printf("%d",ft_strncmp(a,b,2));
//     printf("\n%d",ft_strncmp(a,b,2));
// }