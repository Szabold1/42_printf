/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:35:33 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/28 13:35:42 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

// FILE: ft_printf.c
int	ft_printf(const char *str, ...);

// FILE: ft_printf_utils.c
int	print_char(int c);
int	print_str(char *str);
int	print_int(int n);
int	print_uint(unsigned int n);

// FILE: ft_printf_utils2.c
int	print_hex(unsigned long long n, char c);
int	print_ptr(void *ptr);

#endif
