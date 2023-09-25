#include "libft/libft.h"

int	print_int(int n)
{
	int	temp;
	int	count;

	count = 0;
	temp = n;
	while (temp)
	{
		temp /= 10;
		count++;
	}
	ft_putnbr_fd(n, 1);
	return (count);
}