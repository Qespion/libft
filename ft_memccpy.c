#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		r;
	char		*cpy_dst;
	char		*cpy_src;

	r = 0;
	cpy_dst = dst;
	cpy_src = (char *)src;
	while (r < n && cpy_src[r] != c)
	{
		cpy_dst[r] = cpy_src[r];
		r++;
	}
	if (cpy_src[r] == c)
	{
		cpy_dst[r] = cpy_src[r];
		return (cpy_dst + ++r);
	}
	else
		return (NULL);
}