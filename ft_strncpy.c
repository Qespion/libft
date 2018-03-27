# include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	r;

	r = 0;
	while (src[r] && r < n)
	{
		dest[r] = src[r];
		r++;
	}
	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}
	return (dest);
}
