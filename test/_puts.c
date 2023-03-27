#include "main.h"
/**
* _puts - prints a string
* @s: input string
*
* Return: number of char
*/
int _puts(char *st)
{
	int i = 0;

	while (st[i])
	{
		_putchar(st[i]);
		i++;
	}
	return (i);
}
