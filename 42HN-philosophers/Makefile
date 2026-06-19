NAME := philo
CC := cc
CFLAGS := -Wall -Wextra -Werror -pthread
CPPFLAGS := -Iinc

SRC := $(shell find src -name '*.c' | sort)
OBJ := $(SRC:%.c=obj/%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

obj/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all
