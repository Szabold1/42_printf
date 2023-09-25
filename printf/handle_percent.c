#include "libftprintf.h"

int	handle_percent(const char **str, va_list args)
{
	int	count;

	count = 0;
	(*str)++;
	if (**str == 'c')
		count += print_char(va_arg(args, int));
	else if (**str == 's')
		count += print_string(va_arg(args, char *));
	else if (**str == 'd' || **str == 'i')
		count += print_int(va_arg(args, int));
	return (count);
}