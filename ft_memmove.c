#include "libft.h"

void        *ft_memmove(void *dest, const void *src, size_t size)
{
	size_t		r;
	char		*cpy_dst;
	char		*cpy_src;
	char		*tmp;

	r = 0;
	cpy_dst = (char *)dest;
	cpy_src = (char *)src;
	tmp = (char *)malloc(sizeof(src));
	if (tmp == NULL || !dest || !src || size <= 0)
		return (dest);
	while (r < size)
	{
		tmp[r] = cpy_src[r];
		r++;
	}
	r = 0;
	while (r < size)
	{
		cpy_dst[r] = tmp[r];
		r++;
	}
	free(tmp);
	return (dest);
}