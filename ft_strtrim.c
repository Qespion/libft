#include "libft.h"

char    *ft_strtrim(char const *s)
{
    char const *last;

    if (s == NULL)
        return (NULL);
    while (*s == ' ' || *s == '\t' || *s == '\n')
        s++;
    if (*s == '\0')
        return (ft_strnew(0));
    last = s + ft_strlen(s) - 1;
    while (*last == ' ' || *last == '\t' || *last == '\n')
        last--;
    return (ft_strsub(s, 0, last - s + 1));
}