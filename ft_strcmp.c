# include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	int	r;

	r = 0;
	while ((unsigned char)s1[r] == (unsigned char)s2[r]
			&& s1[r] != '\0')
		r++;
	return ((unsigned char)s1[r] - (unsigned char)s2[r]);
}
