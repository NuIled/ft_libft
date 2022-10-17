#ifndef my_header_file  
#define my_header_file  
typedef unsigned long int size_t;

size_t ft_strlen(const char *s);
int ft_atoi(const char *str);
void *ft_memchr(const void *s, int c, size_t n);
int ft_strncmp ( const char * str1, const char * str2, size_t num );
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *strchr(const char *s, int c);
size_t strlcdat(char * dst, const char * src, size_t dstsize);
size_t strlcdpy(char * dst, const char * src, size_t dstsize);
char *ft_strrchr(const char *s, int c);
int ft_toupper(int c);
int ft_tolower(int c);

#endif  