# include "libft.h"

void		ft_putendl(char const *s)
{
    int r;

    r = 0;
    while (s[r])
    {
        write(1, &s[r], 1);
        r++;
    }
    write(1, "\n", 1);
}