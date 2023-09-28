#include "libft/libft.h"

int	print_int(int n)
{
	int	count;

	ft_putnbr_fd(n, 1);
	count = 0;
	if (n == -2147483648)
		return (11);
	else if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}