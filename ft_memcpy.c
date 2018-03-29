# include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
    size_t  r;

    r = 0;
    while (r < n)
    {
        ((char*)dst)[r] = ((char*)src)[r];
        r++;
    }
    return ((void*)dst);
}