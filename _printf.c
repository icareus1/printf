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
<<<<<<< HEAD
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
=======
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
>>>>>>> 671aca11434f84f54d209bacd1dbd0e6d2da5fd4
	}
	va_end(args);
	return (count);
}
<<<<<<< HEAD
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
=======

>>>>>>> 671aca11434f84f54d209bacd1dbd0e6d2da5fd4
