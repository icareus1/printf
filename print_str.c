#include "main.h"
/**
* print_str - prints string
* @args: argment
* Return: number of characters printed
*/
int print_str(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;

	if (s == NULL)
		s = "(null)";

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}
