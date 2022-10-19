#include <stdio.h>
char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    char *str = (char *)(s);
    while (str[i])
    {
        if (str[i] == c )
        {
            return (&str[i]);
        }
        i++;
    }
    if (str[i]=='\0'&& c == '\0')
        {
            return (&str[i]);
        }
    return(0);
}
/*int main()
{
    printf("%i",strchr("",'g'));
}
*/