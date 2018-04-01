# include "libft.h"

char		*ft_strtrim(char const *s)
{
    int start;
    int end;
    char    *str;
    int     r;

    start = 0;
    end = ft_strlen(s) - 1;
    r = 0;
    while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
        end--;
    while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
        start++;
    if (start > end)
        return (ft_strnew(1));
    str = ft_strnew(end - start + 1);
    while (start <= end)
        str[r++] = s[start++];
    str[r] = '\0';
    return (str);
}