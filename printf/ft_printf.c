#include "libft.h"

int	ft_printf(const char *str, ...)
{
	va_list args;

	va_start(args, str);
	va_end(args);
	if (handle_err())
		return (-1);
}