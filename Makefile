NAME		= libft
CC			= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS= ft_atoi.c \
     ft_putchar.c \
     ft_strcmp.c \
     ft_strncmp.c \
     ft_isalpha.c \
     ft_strdup.c \
     ft_putchar.c \
     ft_strlen.c \
     ft_strncpy.c \
     ft_isprint.c \
     ft_strcpy.c \
     ft_memcmp.c \
     ft_memccpy.c \
     ft_memalloc.c \
     ft_strcat.c \
     ft_strncat.c \
     ft_strchr.c \
     ft_strrchr.c \
     ft_strlcat.c \
     ft_strnew.c \
     ft_bzero.c \
     ft_memdel.c \
     ft_memchr.c \
     ft_memmove.c \
     ft_memcpy.c \
     ft_isalnum.c \
     ft_strstr.c \
     ft_toupper.c \
     ft_tolower.c \
     ft_isascii.c \
     ft_putstr_fd.c \
     ft_putnbr_fd.c \
     ft_putendl_fd.c \
     ft_putendl.c \
     ft_putnbr.c \
     ft_strnstr.c \
     ft_strjoin.c \
     ft_strsplit.c \
     ft_memset.c \
     ft_isdigit.c \
     ft_putchar_fd.c \
     ft_putstr.c

OBJS		= $(SRCS:.c=.o)


all : $(NAME)

$(NAME) :   $(OBJS)
	ar -rc $(NAME).a $(OBJS)

so: $(CC) -g -fPIC $(CFLAGS) $(SRCS) -shared -o libft.so

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME).a

re : fclean all

.PHONY : clean fclean re
