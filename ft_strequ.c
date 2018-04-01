# include "libft.h"

int			ft_strequ(char const *s1, char const *s2)
{
    int r;

    r = 0;
    while (s1[r] && s2[r])
    {
        if (s1[r] != s2[r])
            return (0);
        r++;
    }
    if (s1[r] == '\0' && s2[r] == '\0')
        return (1);
    return (0);
}