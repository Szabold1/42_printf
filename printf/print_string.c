#include "libft/libft.h"

int	print_string(char *str)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count);
}