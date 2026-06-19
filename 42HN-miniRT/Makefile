NAME := miniRT
CC := cc
CFLAGS := -Wall -Wextra -Werror -O2
CPPFLAGS := -Iinc -Ilibft/inc -Ift_printf/inc -Iget_next_line/inc -IMLX42/include
LDLIBS := get_next_line/get_next_line.a ft_printf/ft_printf.a libft/libft.a MLX42/build/libmlx42.a -lglfw -ldl -pthread -lm

SRC := $(shell find src -name '*.c' | sort)
GNL_SRC := $(shell find get_next_line/src -name '*.c' | sort)
OBJ := $(SRC:%.c=obj/%.o)
GNL_OBJ := $(GNL_SRC:%.c=obj/%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): libft/libft.a ft_printf/ft_printf.a get_next_line/get_next_line.a MLX42/build/libmlx42.a $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LDLIBS) -o $@

libft/libft.a:
	$(MAKE) -C libft all bonus

ft_printf/ft_printf.a:
	$(MAKE) -C ft_printf

get_next_line/get_next_line.a: $(GNL_OBJ)
	ar rcs $@ $^

MLX42/build/libmlx42.a:
	cmake -S MLX42 -B MLX42/build
	cmake --build MLX42/build -j

obj/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf obj MLX42/build get_next_line/get_next_line.a
	$(MAKE) -C libft clean
	$(MAKE) -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean
	$(MAKE) -C ft_printf fclean

re: fclean all
