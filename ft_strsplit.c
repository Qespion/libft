#include <stdlib.h>
#include <stdio.h>

int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

int	ft_word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	int	i;
	char	**tab;
	int	r;
	int	j;

	j = 0;
	r = 0;
	i = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_count(s, c) + 1))))
		return (0);
	while (s[i])
	{
		while(s[i] == c)
			i++;
		if (!(tab[j] = (char*)malloc(sizeof(char) * ft_word_len(s, c, i))))
			return (0);
		while (s[i] != c && s[i] != '\0')
		{
			tab[j][r] = s[i];
			i++;
			r++;
		}
		j++;
		r = 0;
		i++;
		while (s[i] == c)
			i++;
	}
	return (tab);
}

int	main(void)
{
	int	r;
	char	**cf;

	cf = ft_strsplit("****", '*');
	r = 0;
	while (cf[r] != NULL)
	{
		printf("%s\n", cf[r]);
		r++;
	}
	return (0);
}
