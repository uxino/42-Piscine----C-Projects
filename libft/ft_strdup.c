#include <stdlib.h>
#include <stdio.h>
size_t ft_strlen(const char *str);

char    *ft_strdup(const char *s)
{
    int i;
    char *p;
    int len;

    len = ft_strlen(s);
    i = 0;
    p = (char *)malloc(sizeof(char) * (len + 1));
    if (!p)
    {
        return (NULL);
    }
    while (s[i])
    {
        p[i] = s[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}
