# include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
    int r;
    int i;

    i = ft_strlen(s1);
    r = 0;
    while (s2[r])
    {
        s1[i] = ((char*)s2)[r];
        i++;
        r++;
    }    
    s1[i] = '\0';
    return (s1);
}