# include "libft.h"

void	ft_putstr(char *str)
{
	int	r;

	r = 0;
	while (str[r])
	{
		write(1, &str[r], 1);
		r++;
	}
}
