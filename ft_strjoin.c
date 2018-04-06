char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	size_t	r;
	size_t	i;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
		r = 0;
		i = 0;
		if ((str = (char *)malloc(sizeof(*str) * len)))
		{
			while (s1[r])
			{
				str[r] = s1[r];
				r++;
			}
			while (s2[i])
				str[r++] = s2[i++];
			str[r] = '\0';
			return (str);
		}
	}
	return (NULL);
}