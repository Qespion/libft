# include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t r;

	r = 0;
	while (r < n)
	{
		((unsigned char*)s)[r] = 0;
		r++;
	}
}
