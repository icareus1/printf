#include "main.h"
/**
 * print_null - print the string null
 * @args: A va_list containing the argument to print
 * @count: keeps track of the total characters printed
 */
void print_null(va_list args __attribute__((unused)), int *count)
{
	_puts("(null)");
	*count += 6;
}
