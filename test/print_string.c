#include "main.h"
/**
 * print_string - Prints a string to stdout
 * @args: A va_list containing the argument to print
 * @count: A pointer to an integer keeping track of the total characters printed
 */
void print_string(va_list args, int *count)
{
	char *str = va_arg(args, char *);

	_puts(str);
	*count += _strlen(str);
}
