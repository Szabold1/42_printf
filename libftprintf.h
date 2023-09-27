/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:16:31 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/27 13:16:34 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
