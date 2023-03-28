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
	int i, len = 0, binary[32];

	if (n == 0)
	{
		len += _putchar('0');
		return (len);
	}
	for (; n > 0; i++)
	{
		binary[i] = (n % 2);
		n /= 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		len += _putchar(binary[i] + '0');
	}
	return (len);
}
