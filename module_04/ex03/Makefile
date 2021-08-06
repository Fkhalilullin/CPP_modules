NAME = ex04

SRCS = main.cpp

HEADER = 

OBJS = $(SRCS:.cpp=.o)

CLANG = clang++ -g -std=c++98 -Wall -Werror -Wextra -Wshadow -Wno-shadow
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