# include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t  r;

	r = 0;
	while (r < n)
	{
		if (((unsigned char*)s)[r] == (unsigned char)c)
			return ((void*)s + r);
		r++;
	}
	return (NULL);
}
