#include "libft.h"
#include <stdlib.h>
void *ft_calloc(size_t count, size_t n)
{
	void *s = malloc(count * n);
	if (s == 0)
		return(NULL);
	ft_bzero(s,n*count);
	return (s);
}
