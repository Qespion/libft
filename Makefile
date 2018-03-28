CC=gcc
AR=ar
ARFLAGS=rc
CFLAGS=-Wall -Wextra -Werror 
NAME=libft.a
SRC= ft_atoi.c \
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
     ft_memalloc.c \
     ft_isalnum.c \
     ft_strstr.c \
     ft_toupper.c \
     ft_tolower.c \
     ft_isascii.c \
     ft_putnbr.c \
     ft_strnstr.c \
     ft_strjoin.c \
     ft_strsplit.c \
     ft_memset.c \
     ft_isdigit.c \
     ft_putchar_fd.c \
     ft_putstr.c
	
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) -shared

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
