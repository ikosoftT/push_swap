NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -Iincludes -Ilibft

SRC = src/main.c

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

