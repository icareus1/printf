#include "main.h"
/**
 * print_percent - Prints a percent sign to stdout
 * @args: A va_list containing the argument to print
 * @count: A pointer to an integer keeping track of the total characters printed
 */
void print_percent(va_list args __attribute__((unused)), int *count)
{
	_putchar('%');
	*count += 1;
}
