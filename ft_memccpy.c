#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *cpy_src;
	char *cpy_dst;

	cpy_src = (char*)src;
	cpy_dst = (char*)dst;
	while (n > 0 && *cpy_src != c)
	{
		n--;
		*cpy_dst++ = *cpy_src++;
	}
	if (n > 0)
	{
		*cpy_dst++ = *cpy_src++;
		return ((void*)cpy_dst);
	}
	else
		return (NULL);