# Variables
NAME = libft.a                  # Name of the output library
SRC = $(wildcard *.c)           # Source files in the current directory
OBJ = $(SRC:.c=.o)              # Object files in the current directory
HEADER = libft.h                # Header file

CC = cc                         # Compiler
CFLAGS = -Wall -Wextra -Werror  # Compiler flags

.PHONY: all clean fclean re

# Targets
all: $(NAME)                   # Default target to build the library

$(NAME): $(OBJ)                # Create the library from object files
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)             # Rule to create object files
	$(CC) $(CFLAGS) -c $< -o $@

clean:                         # Remove object files
	rm -f $(OBJ)

fclean: clean                  # Remove library and clean
	rm -f $(NAME)

re: fclean all                 # Clean and rebuild everything
