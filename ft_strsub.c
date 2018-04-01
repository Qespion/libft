# include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  r;

    r = 0;
    if (!(str = (char*)malloc(sizeof(char) * len)))
        return (NULL);
    while (r < len)
    {
        str[r] = s[r + start];
        r++;
    }
    str[r] = '\0';
    return (str);
}