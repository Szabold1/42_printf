#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include "libft/libft.h"

int ft_printf(const char *str, ...);
int handle_percent(const char **str, va_list arg_ptr);
int print_char(int c);
int print_int(int n);
int print_str(char *str);

#endif