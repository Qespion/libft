# include "libft.h"

void				*ft_memmove(void *dst, void const *src, size_t len)
{
    size_t  r;
    unsigned char	*tmp_src;
	unsigned char	*tmp_dst;
    
    r = 0;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
    if (tmp_dst < tmp_src)
    {
        while (r < len)
        {
            tmp_dst[r] = tmp_src[r];
            r++;
        }
    }
    else
    {
        len--;
		while ((int)len >= 0)
		{
			tmp_dst[len] = tmp_src[len];
			len--;
		}
    }
    return ((void*)tmp_dst);
}
