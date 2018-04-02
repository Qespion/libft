# include <stdio.h>
# include <stdlib.h>

int	ft_size(int n)
{
	int size;

	size = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char    *ft_itoa(int n)
{
	int	size;
	char	*str;

	size = ft_size(n) - 1;
	if (n == -2147483648)
		return ("-2147483648");
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	str[size + 1] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 9)
	{
		str[size--] = n % 10 + '0';
		n /= 10;
	}
	str[size] = n + '0';
	return (str);
}
