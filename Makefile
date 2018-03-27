CC=gcc
AR=ar
ARFLAGS=rc
CFLAGS=-Wall -Wextra -Werror 
NAME=libft.a
SRC= ft_atoi.c \
     ft_putchar.c \
     ft_strcmp.c \
     ft_putchar.c \
     ft_putstr.c
	
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) -shared

so:	clean

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
