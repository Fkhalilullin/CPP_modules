NAME = ex00

SRCS = main.cpp 

HEADER = whatever.hpp

OBJS = $(SRCS:.cpp=.o)

CLANG = clang++ -g -std=c++98  -Wshadow -Wno-shadow -Wall -Werror -Wextra
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