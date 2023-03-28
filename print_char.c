#include "main.h"
/**
* print_char - prints character
* @args: argument
* Return: 1 (success)
*/
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
