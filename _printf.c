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

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				count += _putchar(va_arg(args, int));
				i += 2;
				break;
			case 's':
				count += _puts(va_arg(args, char *));
				i += 2;
				break;
			case '%':
				count += _putchar('%');
				i += 2;
				break;
			}
		}
		count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/**
* _puts - prints a string
* @s: input string
*
* Return: number of char
*/
int _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
