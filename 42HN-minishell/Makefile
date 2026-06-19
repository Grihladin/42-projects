NAME := minishell
CC := cc
CFLAGS := -Wall -Wextra -Werror -D_GNU_SOURCE
CPPFLAGS := -Iinc -Ilibft/inc -Iget_next_line/inc
LDLIBS := libft/libft.a -lreadline -lncurses

SRC := $(filter-out src/utils/get_commands.c,$(shell find src get_next_line/src -name '*.c' | sort))
OBJ := $(SRC:%.c=obj/%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): libft/libft.a $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LDLIBS) -o $@

libft/libft.a:
	$(MAKE) -C libft all bonus

obj/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf obj
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean

re: fclean all
