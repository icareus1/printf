#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: format string containing conversion specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count += _putchar(va_arg(args, int));
			else if (*format == 's')
				count += _puts(va_arg(args, char *));
			else if (*format == '%')
				count += _putchar('%');
			else
				count += _putchar('%') + _putchar(*format);
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
