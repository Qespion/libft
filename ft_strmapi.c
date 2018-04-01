# include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    unsigned int     r;

    r = 0;
	if(!(str = (char *)malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (s[r])
	{
		str[r] = (*f)(r, ((char)s[r]));
		r++;
	}
	str[r] = '\0';
	return (str);
}