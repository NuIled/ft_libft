#include "libft.h"
#include <stdio.h> 
char *ft_strrchr(const char *s, int c)
{
    int i;
   // int len;
    char *str = (char *)(s);
    i = ft_strlen(str);
    while (i+1)
    {
        if (str[i] == c)
            return (&str[i]);
        i--;
    }
        if(str[i]=='\0'&& c =='\0')
        {
            return (&str[i]);
        }
    return(NULL);

}

// int main()
// {
//     char *src = "īœ˙ˀ˘¯ˇ¸¯.œ«‘––™ª•¡¶¢˜ˀ";
// 	char *d1 = strrchr(src, L'–');
// 	char *d2 = ft_strrchr(src, L'–');

//    printf("%s",ft_strrchr("",'r'));
//       printf("\n %s",strrchr("",'r'));

// }