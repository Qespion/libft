#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void	ft_putchar(char c);
int	ft_atoi(char *str);
void	ft_putstr(char *str);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
int	ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
void		*ft_memalloc(size_t size);
int		ft_isascii(int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int     ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
char	**ft_strsplit(char const *s, char c);
int     ft_toupper(int c);
char	*ft_strstr(const char *big, const char *little);
int		ft_tolower(int c);
void	ft_putnbr(int nb);
void    ft_putchar_fd(char c, int fd);
char		*ft_strjoin(char const *s1, char const *s2);

#endif
