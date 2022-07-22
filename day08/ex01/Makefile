.PHONY: all clean fclean re

NAME = Span

SRCS = main.cpp Span.cpp
HDRS = Span.hpp
OBJS = $(SRCS:.cpp=.o)

CFLAGS =-std=c++98 -Wall -Wextra -Werror

%.o: %.cpp $(HDRS)
	c++ -c $(CFLAGS) $< -o $@

CC = c++ $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CC) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all