#include "libft.h"
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void    *zone;

	if (size < 1)
		return (NULL);
	zone = malloc(sizeof(size));
	ft_memset(zone, 0, size);
	return (zone);
}
