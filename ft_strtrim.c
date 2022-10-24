#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t lenset;
	lenset = ft_strlen(set)-1;
	i = ft_strlen(s1)+lenset;
	char * dst;
	dst = ft_strnstr(s1,set,i);
	size_t lendst;
	lendst = ft_strlen(dst);
	char * d = malloc(i);
	if (d == 0)
		return(NULL);
	ft_strlcpy(d,s1,i-lendst);
	ft_strlcpy(d,s1,lendst-lenset);
	return d;

}
int main() {
char *s1 = "where is my ";
    char *s2 = "is";
    char *s = ft_strtrim(s1,s2);
    printf("%s",s);
}