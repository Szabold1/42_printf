/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:38:36 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/27 10:44:16 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// check characters in 'str', if not '%' then print it, otherwise handle it
// return the number of characters printed
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