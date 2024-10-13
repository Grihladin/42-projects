NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
HEADER = libft.h
CC = cc

CFLAGS = -Wall -Wextra -Werror #-I/path/to/headers

.PHONY: all clean fclean re

# Targets
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
