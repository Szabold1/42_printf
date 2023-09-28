#include "libftprintf.h"

int	print_hex(unsigned long long n, char c)
{
	int count;
	char *hex_sm;
	char *hex_lg;

	hex_sm = "0123456789abcdef";
	hex_lg = "0123456789ABCDEF";
	count = 0;
	if (n < 16)
	{
		if (c == 'x')
			ft_putchar_fd(hex_sm[n], 1);
		else if (c == 'X')
			ft_putchar_fd(hex_lg[n], 1);
		count++;
	}
	else
	{
		count += print_hex(n / 16, c);
		count += print_hex(n % 16, c);
	}
	return (count);
}