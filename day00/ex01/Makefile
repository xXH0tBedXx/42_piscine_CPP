.PHONY: all clean fclean re

NAME = PhoneBook

SRCS = main.cpp PhoneBook.cpp
HDRS = PhoneBook.hpp
OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

%.o: %.cpp $(HDRS)
	c++ -c $(CFLAGS) $< -o $@

CC = c++ $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CC) $(SRCS) -o PhoneBook

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
