# include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  len;
    size_t  r;
    size_t  i;

    i = 0;
    r = 0;
    len = ft_strlen(s1) + ft_strlen(s2);
    if (!(str = (char*)malloc(sizeof(char) * len)))
        return (0);
    while (s1[r])
    {
        str[r] = s1[r];
        r++;
    }
    while (s2[i])
    {
        str[r + i] = s2[i];
        i++;
    }
    str[r + i] = '\0';
    return (str);
}