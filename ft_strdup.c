#include "libft.h"
#include <stdlib.h>
char *ft_strdup(const char *s1)
{
	size_t i;
	i = ft_strlen(s1)+1;
	char *s = malloc (i);
	if (s == 0)
		return(NULL);
	ft_strlcpy(s,s1,i);
	return(s);
}
