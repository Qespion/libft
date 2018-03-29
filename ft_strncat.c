# include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
    int r;
    int i;

    r = 0;
    i = ft_strlen(s1);
    while (s2[r] && (size_t)r < n)
    {
        s1[i] = ((char*)s2)[r];
        i++;
        r++;
    }
    s1[i] = '\0';
    return (s1);
}