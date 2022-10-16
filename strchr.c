#include <stdio.h>
char *strchr(const char *s, int c)
{
    int i;
    i = 0;
    char *str = (char *)(s);
    while (str[i] && c > 0)
    {
        if (str[i] == c)
        {
            return (&str[i]);
        }
        i++;
    }
    return(0);

}
/*int main()
{
    printf("%s",strchr("asdczxvgbejnr",110));
}