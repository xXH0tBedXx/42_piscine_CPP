.PHONY: all clean fclean re

NAME = megaphone

SRCS = megaphone.cpp

CFLAGS = -Wall -Wextra -Werror

CC = c++

all: $(NAME)

$(NAME): megaphone.cpp
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
