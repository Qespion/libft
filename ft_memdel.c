# include "libft.h"

void    ft_memdel(void **ap)
{
    if (ap)
    {
        if (*ap == NULL)
            return ;
        free(*ap);
        *ap = NULL;
    }
}