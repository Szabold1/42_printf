#include "libftprintf.h"

int	handle_percent(const char **str, va_list arg_ptr)
{
	int count;

	count = 0;
	(*str)++;
	if (**str == '\0')
		return (0);
	else if (**str == 'c' || **str == '%')
		count += print_char(va_arg(arg_ptr, int));
	else if (**str == 's')
		count += print_str(va_arg(arg_ptr, char *));
	else if (**str == 'p')
		count += print_ptr(va_arg(arg_ptr, void *));
	else if (**str == 'd' || **str == 'i')
		count += print_int(va_arg(arg_ptr, int));
	else if (**str == 'u')
		count += print_uint(va_arg(arg_ptr, int));
	else if (**str == 'x' || **str == 'X')
		count += print_hex();
	return (count);
}

int	print_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	print_str(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	print_int(int n)
{
	int	count;

	ft_putnbr_fd(n, 1);
	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}