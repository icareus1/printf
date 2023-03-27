#include "main.h"
/**
 * print_char - Prints a single character to stdout
 * @args: A va_list containing the argument to print
 * @count: keeps track of the total characters printed
 */
void print_char(va_list args, int *count)
{
	char c = va_arg(args, int);

	_putchar(c);
	*count += 1;
}
