# include "libft.h"

void				*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	size_t			r;
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;

	r = 0;
	tmp_src = (unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	while (r < n)
	{
		if ((tmp_dst[r] == (unsigned char)c) && (tmp_src[r] == (unsigned char)c))
			return (tmp_dst + ++r);
		r++;
	}
	return (NULL);
}