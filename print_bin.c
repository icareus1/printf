#include "main.h"
/**
 * print_bin - Prints a number in binary
 * @args: The argument list
 *
 * Return: The number of digits printed
 */
int print_bin(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i, j, bin_digit;
	int len = 0;
	char binary[32];

	if (n == 0)
	{
		len += _putchar('0');
		return (len);
	}
	for (i = 0; n > 0; i++)
	{
		binary[i] = n % 2 + '0';
		n /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		bin_digit = binary[j];
		len += _putchar(bin_digit);
	}
	return (len);
}
