#include "libft.h"
#include <stdio.h>
void ft_bzero(void *s, size_t n)
{
	size_t i;
	i = 0;
	char *sr;
	sr = (char *)(s);
	while (n > i && sr[i])
	{
		sr[i] = 0;
		i++;
	}
}
