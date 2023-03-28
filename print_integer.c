#include "main.h"
/**
 * print_integer - Prints an integer to stdout
 * @args: A va_list containing the argument to print
 * @count: keeps track of the total characters printed
 * Return: 0 on success
 */
int print_integer(va_list args, int *count)
{
	int num = va_arg(args, int);
	int i;
	int digits = count_digits(num);
	char buffer[20]; /* max number of digits for an int is 10 digits */

	if (num < 0)
	{
		_putchar('-');
		*count += 1;
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		*count += 1;
	}
	else
	{
		for (i = digits - 1; i >= 0; i--)
		{
			buffer[i] = num % 10 + '0';
			num /= 10;
		}
		for (i = 0; i < digits; i++)
		{
			_putchar(buffer[i]);
			*count += 1;
		}
	}
	return (0);
}
