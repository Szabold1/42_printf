NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft
SRC_DIR = ./files
SRC = $(SRC_DIR)ft_printf.c \
		$(SRC_DIR)handle_percent.c \
		$(SRC_DIR)print_char.c \
		$(SRC_DIR)print_int.c \
		$(SRC_DIR)print_string.c
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
