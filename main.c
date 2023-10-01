#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
	char *str = "This is";
	int num = 42;
	int num2 = -2147483648;
	unsigned int numu = 4294967295;
	ft_printf("\n------------ %%s %%d ... %%c %%i\n");
	int my_ret1 = 
		ft_printf("|%s %d Vienna %c %i|\tft_printf\n", str, num, 'a', num2);
	int ret1 = 
		printf("|%s %d Vienna %c %i|\tprintf\n", str, num, 'a', num2);
	printf("return: %d\t\t\tft_printf\n", my_ret1);
	printf("return: %d\t\t\tprintf\n\n", ret1);

	ft_printf("\n------------ %%p\n");
	int my_ret2 = ft_printf("|%p|\tft_printf\n", (void *)str);
	int ret2 = printf("|%p|\tprintf\n", (void *)str);
	printf("return: %d\t\t\tft_printf\n", my_ret2);
	printf("return: %d\t\t\tprintf\n\n", ret2);

	ft_printf("\n------------ %%x %%X\n");
	int my_ret3 = ft_printf("|%d -> %x -> %X|\tft_printf\n", num2, num2, num2);
	int ret3 = printf("|%d -> %x -> %X|\tprintf\n", num2, num2, num2);
	printf("return: %d\t\t\tft_printf\n", my_ret3);
	printf("return: %d\t\t\tprintf\n\n", ret3);

	ft_printf("\n------------ %%u\n");
	int my_ret4 = ft_printf("|%u|\tft_printf\n", numu);
	int ret4 = printf("|%u|\tprintf\n", numu);
	printf("return: %d\t\t\tft_printf\n", my_ret4);
	printf("return: %d\t\t\tprintf\n\n", ret4);
	return (0);
}