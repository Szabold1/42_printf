NAME = ft_printf.a
SRC_DIR = ./src
SRC = ft_printf.c \
		ft_printf_utils.c \
		ft_printf_utils2.c
OBJS = $(SRC:%.c=$(SRC_DIR)/%.o)
CC = cc
AR = ar rcs
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re