#include "./ft_printf/ft_printf.h"
#include <stdio.h>

int main(void) {
    // Test case 1
	printf("\n--------------------  Test Case 1  --------------------\n");
	char c = 'a';
    int res1 = printf("Original printf:\tCharacter: %c\n", c);
    int my_res1 = ft_printf("Your ft_printf:\t\tCharacter: %c\n", c);
	printf("Original printf:\tReturn value: %d\n", res1);
	printf("Your ft_printf:\t\tReturn value: %d\n", my_res1);

	// Test case 2
	printf("\n--------------------  Test Case 2  --------------------\n");
	char *str = "Hello, World!";
    int res2 = printf("Original printf:\tString: %s\n", str);
    int my_res2 = ft_printf("Your ft_printf:\t\tString: %s\n", str);
	printf("Original printf:\tReturn value: %d\n", res2);
	printf("Your ft_printf:\t\tReturn value: %d\n", my_res2);

	// Test case 3
	printf("\n--------------------  Test Case 3  --------------------\n");
	char *ptr = str;
    int res3 = printf("Original printf:\tPointer: %p\n", ptr);
    int my_res3 = ft_printf("Your ft_printf:\t\tPointer: %p\n", ptr);
	printf("Original printf:\tReturn value: %d\n", res3);
	printf("Your ft_printf:\t\tReturn value: %d\n", my_res3);

	// Test case 4
	printf("\n-------------------- Test Case 4  --------------------\n");
	int num_int = 2147483647;
    int res4 = printf("Original printf:\tInteger: %d\n", num_int);
    int my_res4 = ft_printf("Your ft_printf:\t\tInteger: %d\n", num_int);
	printf("Original printf:\tReturn value: %d\n", res4);
	printf("Your ft_printf:\t\tReturn value: %d\n", my_res4);

	// Test case 5
	printf("\n-------------------- Test Case 5  --------------------\n");
	unsigned int num_uint = 3147483647;
    int res5 = printf("Original printf:\tUnsigned Integer: %u\n", num_uint);
    int my_res5 = ft_printf("Your ft_printf:\t\tUnsigned Integer: %u\n", num_uint);
	printf("Original printf:\tReturn value: %d\n", res5);
	printf("Your ft_printf:\t\tReturn value: %d\n", my_res5);

	// Test case 6
	printf("\n-------------------- Test Case 6  --------------------\n");
	unsigned int num_hex = 2255;
    int res6 = printf("Original printf:\tHexadecimal: %x\n", num_hex);
    int my_res6 = ft_printf("Your ft_printf:\t\tHexadecimal: %x\n", num_hex);
	printf("Original printf:\tReturn value: %d\n", res6);
	printf("Your ft_printf:\t\tReturn value: %d\n", my_res6);

	// Test case 7
	printf("\n-------------------- Test Case 7  --------------------\n");
	unsigned int num_hex2 = 5555;
    int res7 = printf("Original printf:\tHexadecimal (uppercase): %X\n", num_hex2);
    int my_res7 = ft_printf("Your ft_printf:\t\tHexadecimal (uppercase): %X\n", num_hex2);
	printf("Original printf:\tReturn value: %d\n", res7);
	printf("Your ft_printf:\t\tReturn value: %d\n", my_res7);

	// Test case 8
	printf("\n-------------------- Test Case 8  --------------------\n");
    int res8 = printf("Original printf:\tPercentage: %%dec\n");
    int my_res8 = ft_printf("Your ft_printf:\t\tPercentage: %%dec\n");
	printf("Original printf:\tReturn value: %d\n", res8);
	printf("Your ft_printf:\t\tReturn value: %d\n", my_res8);

	// Test case 9
	printf("\n-------------------- Test Case 9  --------------------\n");
	int res9 = printf("Original printf:\tEmpty String: %s\n", "");
    int my_res9 = ft_printf("Your ft_printf:\t\tEmpty String: %s\n", "");
	printf("Original printf:\tReturn value: %d\n", res9);
	printf("Your ft_printf:\t\tReturn value: %d\n", my_res9);

	// Test case 10
	printf("\n-------------------- Test Case 10  --------------------\n");
	int *ptr_null = NULL;
    int res10 = printf("Original printf:\tNull Pointer: %p\n", ptr_null);
    int my_res10 = ft_printf("Your ft_printf:\t\tNull Pointer: %p\n", ptr_null);
	printf("Original printf:\tReturn value: %d\n", res10);
	printf("Your ft_printf:\t\tReturn value: %d\n", my_res10);

	// Test case 11
	printf("\n-------------------- Test Case 11  --------------------\n");
	char *str_null = NULL;
	int res11 = printf("Original printf:\tNull String: %s\n", str_null);
	int my_res11 = ft_printf("Your ft_printf:\t\tNull String: %s\n", str_null);
	printf("Original printf:\tReturn value: %d\n", res11);
	printf("Your ft_printf:\t\tReturn value: %d\n", my_res11);

    return (0);
}