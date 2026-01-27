
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -Ilibft

SRC = \
	create_stack.c main.c op_push.c op_reverse_rotate.c op_rotate.c \
	op_swap.c parse_args.c parse_logic.c parse_utils.c sort_five.c sort_large.c sort_small_utils.c \
	sort_three.c sort_two.c stack_utils.c sort_indexing_helps.c sort_rotate_helpers.c costs_helps.c 
OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJ) push_swap.h

	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all