# include "libft.h"

char		*ft_strnew(size_t size)
{
    char    *str;
    size_t  r;

    r = 0;
    if (!(str = (char*)malloc(sizeof(char) * size)))
        return (NULL);
    while (r <= size)
    {
        str[r] = '\0';
        r++;
    }
    return (str);
}