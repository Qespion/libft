# include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
    size_t r;

    r = 0;
    while (r < n)
    {
        if (s1[r] != s2[r])
            return (0);
        if (s1[r] == '\0' && s2[r] == '\0')
            return (1);
        r++;
    }
    return (1);
}