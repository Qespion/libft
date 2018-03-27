# include "libft.h"

char	*ft_strdup(const char *src)
{
	int	r;
	char	*dest;

	r = 0;
	while (src[r])
		r++;
	if (!(dest = (char*)malloc(sizeof(char) * r)))
		return (0);
	r = 0;
	while (src[r])
	{
		dest[r] = src[r];
		r++;
	}
	dest[r] = '\0';
	return (dest);
}
