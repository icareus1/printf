#include "main.h"
/**
 * print_int - Prints an integer
 * @args: argument
 *
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int divisor = 1, i, digits = 0, last_digit, num_chars = 0;

	if (n < 0)
	{
		num_chars += _putchar('-');
		n *= -1;
	}

	for (i = n; i > 0; i /= 10)
	{
		digits++;
		divisor *= 10;
	}

	divisor /= 10;

	for (i = 0; i < digits; i++)
	{
		last_digit = n / divisor;
		n = n % divisor;
		divisor /= 10;
		num_chars += _putchar('0' + last_digit);
	}

	return (num_chars);
}
