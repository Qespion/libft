# include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    size_t r;

    r = 0;
    while (r < len)
    {
        ((unsigned char*)b)[r] = (unsigned char)c;
        r++;
    }
    return (b);
}