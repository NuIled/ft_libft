#include "libft.h"
void *ft_memset(void *b, int c, size_t n)
{
	size_t i;
	i = 0;
	char *d;
	// unsigned char cl;
	// // cl = unsigned char (c);
	d = (char *)(b);
	while (n > i )
	{
		d[i] = c;
		i++;
	}
	return(d);
}
