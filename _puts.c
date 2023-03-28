#include "main.h"
/**
* _puts - prints a string
* @st: input string
*
* Return: i
*/
int _puts(char *st)
{
	int i = 0;

	if (st == NULL)
		st = "(null)";
	while (st[i])
	{
		_putchar(st[i]);
		i++;
	}
	return (i);
}
