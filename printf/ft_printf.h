/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:35:33 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/28 13:35:42 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	handle_percent(const char **str, va_list arg_ptr);
int	print_char(int c);
int	print_int(int n);
int	print_str(char *str);
int	print_hex(unsigned long long n, char c);
int	print_ptr(void *ptr);
int	print_uint(unsigned int n);

#endif
