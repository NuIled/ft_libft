#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *ss;
	char * d;
	if (start >= len)
		return ft_strdup("");
	ss = (char *)(s);
	d = malloc(len+1);
	if (d == 0)
		return(NULL);
	ss = &ss[start];
	ft_strlcpy(d,ss,len+1);
	 return(d);
}
