#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t b;
	char *p;
	i = ft_strlen(s2) +ft_strlen(s1)+ 1;
	char * d = malloc(i);
	if (d == 0)
		return(NULL);
	d = ft_memmove(d,s1,i);
	b = ft_strlen(d);
	p = d;
	d = &d[b];
	d = ft_memmove(d,s2,i-b);
	return (p);
}
// int main ()
// {
// 	char *s1 = "where is my ";
// 	char *s2 = "malloc ???";
// 	char *s = ft_strjoin(s1,s2);
// 	printf("%s",s);
// }

