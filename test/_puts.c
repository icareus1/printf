#include "main.h"
/**
* _puts - prints a string
* @st: input string
*
* Return: 0 on success
*/
int _puts(char *st)
{
	int i = 0;

	if (st == NULL)
		return (-1);
	while (st[i])
	{
		_putchar(st[i]);
		i++;
	}
	return (i);
}
