#include "main.h"
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
			return (&print_null);
		default:
			return (NULL);
	}
}
