# include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int r;

    r = ft_strlen(s);
    while (r >= 0)
    {
        if (s[r] == (char)c)
            return ((char*)(s + r));
        r--;
    }
    if ((char)c == 0)
        return ((char*)s);
    return (NULL);
}