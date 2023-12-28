NAME = libftprintf.a
LIBFT = ./libft/libft.a
LIBFT_DIR = ./libft
SRC_DIR = ./src
SRC = ft_printf.c \
		handle_percent.c \
		print_char.c \
		print_hex.c \
		print_int.c \
		print_ptr.c \
		print_str.c \
		print_uint.c
OBJS = $(SRC:%.c=$(SRC_DIR)/%.o)
CC = cc
AR = ar rcs
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
CP = cp

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CP) $(LIBFT) $(NAME)
	@$(AR) $(NAME) $(OBJS)

$(LIBFT): $(LIBFT_DIR)
	@$(MAKE) -C $(LIBFT_DIR)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(MAKE) clean -C $(LIBFT_DIR)
	@$(RM) $(OBJS)

fclean: clean
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re