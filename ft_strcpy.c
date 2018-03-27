# include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	r;

	r = 0;
	while (src[r])
	{
		dest[r] = src[r];
		r++;
	}
	dest[r] = '\0';
	return (dest);
}
