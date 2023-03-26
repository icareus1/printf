#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: format string containing conversion specifiers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, len = 0, n = 4;
	
	func_t p[] = {{'c', print_char}, {'s', print_str},
		{'d', print_int}, {'i', print_int},
		};

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			for (j = 0; j < n; j++)
			{
				if (format[i + 1] == p[j].c)
				{
					len += p[j].f(args);
					i += 2;
					break;
				}
				else if (format[i + 1] == '%')
				{
					len += _putchar('%');
					i += 2;
					break;
				}
				else if (j == (n - 1))
				{
					len += _putchar(format[i++]);
				}
			}
			continue;
		}
		len += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
