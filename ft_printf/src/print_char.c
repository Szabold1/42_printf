/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:37:29 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/28 13:37:57 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// print a character to stdout and return the number of characters written
int	print_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}
