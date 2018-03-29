# include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
    int r;

    r = 0;
    while (s[r])
    {
        write(fd, &s[r], 1);
        r++;
    }
}
