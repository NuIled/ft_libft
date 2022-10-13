void *memchrr(const void *s, int c, int n)
{
  
     char *m;
    m =  (void *)s;
    int i;
    i = 1;
      if (m[i]=='\0'||c =='\0'||n =='\0')
        return (NULL);
    while(m[i]&& c != m[i]&& n >= i)
        i++;
    return &m[i];
}