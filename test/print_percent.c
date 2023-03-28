#include "main.h"
/**
 * print_percent - Prints a percent sign to stdout
 * @args: A va_list containing the argument to print
 * @count: keeps track of the total characters printed
 * Return: 1 on success
 */
int print_percent(va_list args __attribute__((unused)), int *count)
{
	_putchar('%');
	*count += 1;
	return (0);
}
