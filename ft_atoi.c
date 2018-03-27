int		ft_atoi(const char *str)
{
	int		i;
	int		neg;
	int		total;

	i = 0;
	total = 0;
	neg = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\n' || str[i] == '\f'
			|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + str[i] - 48;
		i++;
	}
	return (neg == 1 ? -total : total);
}