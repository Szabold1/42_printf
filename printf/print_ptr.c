#include "libftprintf.h"

int	print_ptr(void *ptr)
{
	int count;

	count = 0;
	ft_putstr_fd("0x", 1);
	count += 2;
	count += print_hex((unsigned long long)ptr, 'x');
	return (count);
}