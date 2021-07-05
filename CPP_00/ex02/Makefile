NAME = account
SRCS = test.cpp Account.cpp
OBJS = $(SRCS:.cpp=.o)
CLANG = clang++ -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CLANG) $(OBJS) -o $(NAME)

$(OBJS): %.o : %.cpp
	$(CLANG) -c $< -o $@

clean:
	rm -rf $(OBJS) $(NAME)

fclean: clean
	rm -rf $(NAME)

re: clean all

.PHONY: all, re, clean