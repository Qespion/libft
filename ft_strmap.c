# include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
    char    *str;
    int     r;

    r = 0;
    if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s))))
        return (0);
    while (s[r])
    {
        str[r] = (*f)(s[r]);
        r++;
    }
    str[r] = '\0';
    return (str);
}