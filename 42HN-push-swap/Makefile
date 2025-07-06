# Variables
CC = cc
NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
INC_DIR = inc
SRC_DIR = src
FT_PRINTF_DIR = ft_printf
FT_PRINTF = $(FT_PRINTF_DIR)/ft_printf.a
SRC = $(SRC_DIR)/ps_main.c \
    $(SRC_DIR)/ps_utils.c \
	$(SRC_DIR)/ps_operations.c \
	$(SRC_DIR)/ps_operations_a.c \
	$(SRC_DIR)/ps_operations_b.c \
	$(SRC_DIR)/ps_operations_both.c \
    $(SRC_DIR)/ps_list_fts1.c \
	$(SRC_DIR)/ps_list_fts2.c \
	$(SRC_DIR)/ps_sorting.c \
	$(SRC_DIR)/ft_split.c
OBJ_DIR = obj
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Rules
all: $(NAME)
	@echo "\033[0;32m🎉 $(NAME) built successfully!\033[0m"

$(NAME): $(OBJ) $(FT_PRINTF)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -o $(NAME) $(OBJ) $(FT_PRINTF)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(FT_PRINTF):
	@$(MAKE) -C $(FT_PRINTF_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -C $(FT_PRINTF_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(FT_PRINTF_DIR) fclean
	@rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re
