#include <stdio.h>
#include <stdlib.h>
int ft_atoi(const char *str)
{
    int i;
    i = 0;
    int b;
    b = 0;
    int sign;
    sign = 1;
   
    while (str[b]== '\t'|| str[b]== ' ')
        b++;
    if (str[b]==45){
        sign = -1;
        b++;}
    else if(str[b]=='+'){
        b++;}
     while (str[b]>='0' && str[b]<='9')
        {i = (i * 10) + ((str[b]) - '0');
        b++;}
    return (i*sign);

    
}
// int main ()
// {
//     char b []="     +-10 sds";
// printf("%d", atoi(b));
// }

