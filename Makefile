NAME  = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = src/*.c

all: $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(SRC) -Iincludes -o $(NAME)

clean :
	rm -f $(NAME)
re: clean all

