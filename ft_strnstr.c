#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
// char *ft_strnstr(const char *h, const char *nl, size_t n)
// {
// 	size_t	i;
// 	size_t	len;
// 	i = 0;
// 	if (*h =='\0')
// 		return(NULL);
// 	if (*nl=='\0')
// 		return (char*)(h);
// 	len = ft_strlen(nl);
// 	while (h[i] != nl[i] && i < n)
// 		i++;
// 	if (h && i < n && nl )
// 	{
// 		 while(nl[i]== h[i] && nl)
// 			i++;
// 		i -=len-2;
// 	return(char *)(&nl[i]);
// 	}
// 	return(NULL);
// }

char	*ft_strnstr(const char *h, const char *nl, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*nl || n == 0)
		return ((char *)h);
	while (h[i] && i < n)
	{
		j = 0;
		while (nl[j] && i + j < n)
		{
			if (h[i + j] == nl[j])
			{
				if (nl[j + 1] == '\0')
					return ((char *)h + i);
				j++;
			}
			else
				break;
		}
		i++;
	}
	return (0);
}

int main()
{
	char s1[44] = "see FF your FF return FF now FF";
	char s2[2] = "FF";
	printf("%s",ft_strnstr(s1, s2, 12));
}
