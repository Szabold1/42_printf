/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:39:36 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/28 13:39:59 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	count += 2;
	count += print_hex((unsigned long long)ptr, 'x');
	return (count);
}
