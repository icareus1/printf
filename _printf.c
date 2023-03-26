#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: format string containing conversion specifiers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, count = 0;
	func_t p[] = {
		{'c', print_char},
		{'s', print_str},
	};

	va_start(args, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < sizeof(p) / sizeof(p[0]); j++)
			{
				if (format[i] == p[j].c)
				{
					count += p[j].f(args);
					break;
				}
			}
			if (j == sizeof(p) / sizeof(p[0]))
			{
				count += _putchar('%');
				count += _putchar(format[i]);
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
