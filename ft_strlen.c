#include <stdio.h>
size_t ft_strlen(const char *s)
{
    int i;
    i = 0;
    if (*s=='\0')
        return (0);
    while (s[i])
        i++;
    return (i);
}
