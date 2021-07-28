NAME = ClapTrap

SRCS = main.cpp ClapTrap.cpp

HEADER = ClapTrap.hpp

OBJS = $(SRCS:.cpp=.o)

CLANG = clang++ -std=c++98# -Wall -Werror -Wextra -fsanitize=address

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CLANG) $(OBJS) -o $(NAME)

$(OBJS): %.o : %.cpp
	$(CLANG) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re