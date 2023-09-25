#include "libft/libft.h"

int	print_string(char *str)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar_fd(*str, 1);
		str++;
		count++;
	}
	return (count);
}