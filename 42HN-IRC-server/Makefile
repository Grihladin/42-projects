NAME := ircserv
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17
CPPFLAGS := -Iinc

SRC := $(shell find src -name '*.cpp' | sort)
OBJ := $(SRC:%.cpp=obj/%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all
