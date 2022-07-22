.PHONY: all clean fclean re

NAME = Zombie_thoughts

SRCS = main.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME)

$(NAME): main.cpp
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all