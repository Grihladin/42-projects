NAME = libft.a

# Object directory
OBJ_DIR = obj

# Source directories
CHAR_DIR = src/char
STRING_DIR = src/string
MEMORY_DIR = src/memory
CONVERSION_DIR = src/conversion
OUTPUT_DIR = src/output
LIST_DIR = src/list

# Character functions
CHAR_SRC = $(CHAR_DIR)/ft_isalpha.c \
           $(CHAR_DIR)/ft_isdigit.c \
           $(CHAR_DIR)/ft_toupper.c \
           $(CHAR_DIR)/ft_tolower.c \
           $(CHAR_DIR)/ft_isalnum.c \
           $(CHAR_DIR)/ft_isascii.c \
           $(CHAR_DIR)/ft_isprint.c

# String functions
STRING_SRC = $(STRING_DIR)/ft_strlen.c \
             $(STRING_DIR)/ft_strchr.c \
             $(STRING_DIR)/ft_strrchr.c \
             $(STRING_DIR)/ft_strcmp.c \
             $(STRING_DIR)/ft_strncmp.c \
             $(STRING_DIR)/ft_strlcpy.c \
             $(STRING_DIR)/ft_strnstr.c \
             $(STRING_DIR)/ft_strlcat.c \
             $(STRING_DIR)/ft_strdup.c \
             $(STRING_DIR)/ft_substr.c \
             $(STRING_DIR)/ft_strjoin.c \
             $(STRING_DIR)/ft_strtrim.c \
             $(STRING_DIR)/ft_split.c \
             $(STRING_DIR)/ft_strmapi.c \
             $(STRING_DIR)/ft_striteri.c

# Memory functions
MEMORY_SRC = $(MEMORY_DIR)/ft_memset.c \
             $(MEMORY_DIR)/ft_bzero.c \
             $(MEMORY_DIR)/ft_memchr.c \
             $(MEMORY_DIR)/ft_memcpy.c \
             $(MEMORY_DIR)/ft_memcmp.c \
             $(MEMORY_DIR)/ft_memmove.c \
             $(MEMORY_DIR)/ft_calloc.c

# Conversion functions
CONVERSION_SRC = $(CONVERSION_DIR)/ft_atoi.c \
                 $(CONVERSION_DIR)/ft_itoa.c

# Output functions
OUTPUT_SRC = $(OUTPUT_DIR)/ft_putchar_fd.c \
             $(OUTPUT_DIR)/ft_putstr_fd.c \
             $(OUTPUT_DIR)/ft_putendl_fd.c \
             $(OUTPUT_DIR)/ft_putnbr_fd.c

# All mandatory functions
SRC = $(CHAR_SRC) $(STRING_SRC) $(MEMORY_SRC) $(CONVERSION_SRC) $(OUTPUT_SRC)
OBJ = $(SRC:src/%.c=$(OBJ_DIR)/%.o)

# Bonus functions (linked list)
BONUS_SRC = $(LIST_DIR)/ft_lstnew.c \
            $(LIST_DIR)/ft_lstadd_front.c \
            $(LIST_DIR)/ft_lstsize.c \
            $(LIST_DIR)/ft_lstlast.c \
            $(LIST_DIR)/ft_lstadd_back.c \
            $(LIST_DIR)/ft_lstdelone.c \
            $(LIST_DIR)/ft_lstclear.c \
            $(LIST_DIR)/ft_lstiter.c \
            $(LIST_DIR)/ft_lstmap.c
BONUS_OBJ = $(BONUS_SRC:src/%.c=$(OBJ_DIR)/%.o)
CC = cc

CFLAGS = -Wall -Wextra -Werror -Iinc

.PHONY: all bonus clean fclean re

# Targets
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo "\033[0;32m🎉 $(NAME) built successfully!\033[0m"

bonus: $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

$(OBJ_DIR)/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
