#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: format string containing conversion specifiers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	va_start(args, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				count += _putchar(va_arg(args, int));
				break;
			case 's':
				count += _puts(va_arg(args, char *));
				break;
			case '%':
				count += _putchar('%');
				break;
			default:
				count += _putchar('%') + _putchar(format[i]);
				break;
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
	}
	va_end(args);
	return (count);
}

