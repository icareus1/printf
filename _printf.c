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
	int i = 0, count = 0;
	char c, *s;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				c = va_arg(args, int);
				_putchar(c);
				count++;
				break;
			case 's':
				s = va_arg(args, char *);
				while (*s != '\0')
				{
					_putchar(*s);
					count++;
					s++;
				}
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			default:
				_putchar('%');
				_putchar(format[i]);
				count += 2;
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
