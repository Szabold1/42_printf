/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:46:35 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/28 14:46:38 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_uint(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
	{
		ft_putchar_fd(n + 48, 1);
		count++;
	}
	else
	{
		count += print_uint(n / 10);
		ft_putchar_fd(n % 10 + 48, 1);
		count++;
	}
	return (count);
}
