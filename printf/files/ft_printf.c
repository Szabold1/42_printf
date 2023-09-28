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

#include "../ft_printf.h"

int	ft_printf(const char *str, ...)
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
			count += handle_percent(&str, arg_ptr);
		str++;
	}
	va_end(arg_ptr);
	return (count);
}

/*
#include <stdio.h>
int main(void)
{
	char *str = "This is";
	int num = 42;
	int num2 = -2147483648;

	ft_printf("\n------------ %%s %%d ... %%c %%i\n");
	int my_ret1 = 
		ft_printf("|%s %d Vienna %c %i|\tft_printf\n", str, num, 'a', 123);
	int ret1 = 
		printf("|%s %d Vienna %c %i|\tprintf\n", str, num, 'a', 123);
	printf("return: %d\t\t\tft_printf\n", my_ret1);
	printf("return: %d\t\t\tprintf\n\n", ret1);

	ft_printf("\n------------ %%p\n");
	int my_ret9 = ft_printf("|%p|\tft_printf\n", (void *)str);
	int ret9 = printf("|%p|\tprintf\n", (void *)str);
	printf("return: %d\t\t\tft_printf\n", my_ret9);
	printf("return: %d\t\t\tprintf\n\n", ret9);

	ft_printf("\n------------ %%x %%X\n");
	int my_ret10 = ft_printf("|%d -> %x -> %X|\tft_printf\n", num2, num2, num2);
	int ret10 = printf("|%d -> %x -> %X|\tprintf\n", num2, num2, num2);
	printf("return: %d\t\t\tft_printf\n", my_ret10);
	printf("return: %d\t\t\tprintf\n\n", ret10);

	ft_printf("------------ %%06d\n");
	int my_ret2 = ft_printf("|%06d|\tft_printf\n", num);
	int ret2 = printf("|%06d|\tprintf\n", num);
	printf("return: %d\t\tft_printf\n", my_ret2);
	printf("return: %d\t\tprintf\n\n", ret2);

	ft_printf("------------ %%-6d\n");
	int my_ret3 = ft_printf("|%-6d|\tft_printf\n", num);
	int ret3 = printf("|%-6d|\tprintf\n", num);
	printf("return: %d\t\tft_printf\n", my_ret3);
	printf("return: %d\t\tprintf\n\n", ret3);

	ft_printf("------------ %%6d\n");
	int my_ret4 = ft_printf("|%6d|\tft_printf\n", num);
	int ret4 = printf("|%6d|\tprintf\n", num);
	printf("return: %d\t\tft_printf\n", my_ret4);
	printf("return: %d\t\tprintf\n\n", ret4);

	ft_printf("------------ %%.4s\n");
	int my_ret5 = ft_printf("|%.4s|\tft_printf\n", str);
	int ret5 = printf("|%.4s|\tprintf\n", str);
	printf("return: %d\t\tft_printf\n", my_ret5);
	printf("return: %d\t\tprintf\n\n", ret5);

	ft_printf("------------ %%#x\n");
	int my_ret6 = ft_printf("|%#x|\tft_printf\n", num);
	int ret6 = printf("|%#x|\tprintf\n", num);
	printf("return: %d\t\tft_printf\n", my_ret6);
	printf("return: %d\t\tprintf\n\n", ret6);

	ft_printf("------------ %% d\n");
	int my_ret7 = ft_printf("|% d|\tft_printf\n", num);
	int ret7 = printf("|% d|\tprintf\n\n", num);
	printf("return: %d\t\tft_printf\n", my_ret7);
	printf("return: %d\t\tprintf\n\n", ret7);

	ft_printf("------------ %%+6d\n");
	int my_ret8 = ft_printf("|%+6d|\tft_printf\n", num);
	int ret8 = printf("|%+6d|\tprintf\n\n", num);
	printf("return: %d\t\tft_printf\n", my_ret8);
	printf("return: %d\t\tprintf\n\n", ret8);

	return (0);
}
*/
