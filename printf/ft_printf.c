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
/*
#include <stdio.h>
int main(void)
{
	char *name = "Boldi";
	int age = 21;
	int my_ret = ft_printf("(ft_printf) Hi, my name is %s, and I'm %d years old.\n", name, age);
	int ret = printf("(printf)    Hi, my name is %s, and I'm %d years old.\n", name, age);
	printf("ft_printf return: %d\n", my_ret);
	printf("   printf return: %d\n", ret);
	return (0);
}
*/