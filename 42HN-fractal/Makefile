NAME := fract-ol
CC := cc
CFLAGS := -Wall -Wextra -Werror -O2 -pthread
CPPFLAGS := -Iinc -IMLX42/include -Ift_printf_submodule/inc -Iget_next_line_submodule/inc
LDLIBS := ft_printf_submodule/ft_printf.a MLX42/build/libmlx42.a -lglfw -ldl -pthread -lm

SRC := $(shell find src get_next_line_submodule/src -name '*.c' | sort)
OBJ := $(SRC:%.c=obj/%.o)

.PHONY: all clean fclean re mlx42

all: $(NAME)

$(NAME): ft_printf_submodule/ft_printf.a MLX42/build/libmlx42.a $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LDLIBS) -o $@

ft_printf_submodule/ft_printf.a:
	$(MAKE) -C ft_printf_submodule

MLX42/build/libmlx42.a:
	cmake -S MLX42 -B MLX42/build
	cmake --build MLX42/build -j

obj/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf obj MLX42/build
	$(MAKE) -C ft_printf_submodule clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C ft_printf_submodule fclean

re: fclean all
