#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	r;
	int	count;

	count = 2;
	r = 0;
    while (s[r])
    {
        if (s[r] == c)
            count++;
        while (s[r] == c)
            r++;
        r++;
    }
	return (count);
}

int     ft_word_len(char const *s, char c, int i)
{
    int count;

    count = 0;
    while (s[i] != c && s[i] != '\0')
    {
        count++;
        i++;
    }
    return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	int	    r;
	char	**tab;
    int     i;
    int     j;

    i = 0;
    j = 0;
    r = 0;
    tab = (char**)malloc(sizeof(char*) * (ft_count_words(s, c) + 1));
    while (s[r])
    {
        while (s[r] == c)
            r++;
        if (!(s[r]))
            break ;
        if (!(tab[i] = (char*)malloc(sizeof(char) * ft_word_len(s, c, r))))
            return (0);
        while (s[r] != c && s[r] != '\0')
            tab[i][j++] = s[r++];
        j = 0;
        i++;
    }
    tab[i] = NULL;
    return (tab);
}