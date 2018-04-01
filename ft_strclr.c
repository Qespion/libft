# include "libft.h"

void	ft_strclr(char *s)
{
    int r;

    r = 0;
    while (s[r])
        s[r++] = 0;
}