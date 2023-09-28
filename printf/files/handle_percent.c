/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:17:03 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/27 13:17:14 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	handle_percent(const char **str, va_list arg_ptr)
{
	int	count;

	count = 0;
	(*str)++;
	if (**str == '\0')
		return (0);
	else if (**str == 'c')
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
		count += print_hex(va_arg(arg_ptr, unsigned int), **str);
	else if (**str == '%')
	{
		ft_putchar_fd('%', 1);
		count++;
	}
	return (count);
}
