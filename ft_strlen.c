# include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t		count;
	const char	*cpy;

	cpy = str;
	count = 0;
	while (*cpy++)
		count++;
	return (count);
}
