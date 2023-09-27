/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:38:36 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/27 10:44:16 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *str, ...)
{
	int		count;
	va_list	arg_ptr;

	count = 0;
	va_start(arg_ptr, str);
	if (*str == 0)
		return (-1);
	while (*str)
	{
		if (*str != '%')
		{
			ft_putchar_fd(*str, 1);
			count++;
		}
		else if (*str == '%')
			count += handle_percent();
		str++;
	}
	va_end(arg_ptr);
	return (count);
}

#include <stdio.h>
int main(void)
{
	char *str = "This is";
	int num = -42;

	int my_ret1 = ft_printf("(ft_printf) |%s %d Vienna|\n", str, num);
	int ret1 = printf("(printf)    |%s %d Vienna|\n", str, num);
	printf("ft_printf return: %d\n", my_ret1);
	printf("   printf return: %d\n\n", ret1);

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

