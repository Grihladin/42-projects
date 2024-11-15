# Variables
CC = cc
NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
FT_PRINTF_DIR = ft_printf
FT_PRINTF = $(FT_PRINTF_DIR)/ft_printf.a
SRC = ps_main.c \
    ps_utils.c \
	ps_operations.c \
	ps_operations_a.c \
	ps_operations_b.c \
	ps_operations_both.c \
    ps_list_fts1.c \
	ps_list_fts2.c \
	ps_sorting.c
OBJ_DIR = obj
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

# Rules
all: $(NAME)
	@echo "\033[0;32m$(NAME) built successfully!\033[0m"

$(NAME): $(OBJ) $(FT_PRINTF)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(FT_PRINTF)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(FT_PRINTF):
	@$(MAKE) -C $(FT_PRINTF_DIR)

clean:
	@rm -f $(OBJ_DIR)/*.o
	@$(MAKE) -C $(FT_PRINTF_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(FT_PRINTF_DIR) fclean
	@rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re
