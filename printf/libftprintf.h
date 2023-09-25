#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>

int ft_printf(const char *format, ...);
int handle_percent(const char **str, va_list args);
int print_char(int c);
int print_int(int n);
int print_string(char *str);

#endif