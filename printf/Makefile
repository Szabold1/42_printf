NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft
SRC = ft_printf.c print_hex.c print_ptr.c handle_percent.c print_char.c print_int.c print_string.c 
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT_DIR)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
