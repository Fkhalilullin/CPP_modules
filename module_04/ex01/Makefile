NAME = Animal

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

HEADER = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

OBJS = $(SRCS:.cpp=.o)

CLANG = clang++ -std=c++98 -Wall -Werror -Wextra -Wshadow -Wno-shadow
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

#.PHONY: all clean fclean re