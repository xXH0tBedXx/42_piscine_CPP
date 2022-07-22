.PHONY: all clean fclean re

NAME = ex00

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HDRS = Zombie.hpp
OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

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