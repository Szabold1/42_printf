#include "libft/libft.h"
#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list args;

	count = 0;
	va_start(args, str);
	while (*str) {
		if (*str == '%')
			count += handle_percent(&str, args);
		else
		{
			ft_putchar_fd(*str, 1);
			count++;
		}
		str++;
	}
	va_end(args);
	// if (handle_err())
	// 	return (-1);
	return (count);
}

#include <stdio.h>
int main(void)
{
	char *str = "This is";
	int num = -42;
	int my_ret = ft_printf("(ft_printf) |%s %d Vienna|\n", str, num);
	int ret = printf("(printf)    |%s %d Vienna|\n", str, num);
	printf("ft_printf return: %d\n", my_ret);
	printf("   printf return: %d\n\n", ret);

	ft_printf("(ft_printf) |%06d|\n", num);
	printf("(printf)    |%06d|\n\n", num);

	ft_printf("(ft_printf) |%-6d|\n", num);
	printf("(printf)    |%-6d|\n\n", num);

	ft_printf("(ft_printf) |%6d|\n", num);
	printf("(printf)    |%6d|\n\n", num);

	ft_printf("(ft_printf) |%.4s|\n", str);
	printf("(printf)    |%.4s|\n\n", str);

	ft_printf("(ft_printf) |%#x|\n", num);
	printf("(printf)    |%#x|\n\n", num);

	ft_printf("(ft_printf) |% d|\n", num);
	printf("(printf)    |% d|\n\n", num);

	ft_printf("(ft_printf) |%+6d|\n", num);
	printf("(printf)    |%+6d|\n\n", num);

	return (0);
}