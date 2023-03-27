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
	print_fn_t print_fn;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			print_fn = get_print_fn(format[i]);
			if (print_fn == NULL)
			{
				count += _putchar('%') + _putchar(format[i]);
			}
			else
			{
				print_fn(args, &count);
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
/**
 * get_print_fn - function that contains the possible cases
 * @c: the type of char after the %
 * Return: points at a code or just return a value
 */
print_fn_t get_print_fn(char c)
{
	switch (c)
	{
		case 'c':
			return (&print_char);
		case 's':
			return (&print_string);
		case 'd':
		case 'i':
			return (&print_integer);
		case '%':
			return (&print_percent);
		case '\0':
			return (NULL);
		default:
			return (NULL);
	}
}
