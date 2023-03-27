#include "main.h"
/**
 * _strlen - count the length of a string
 * @s: the string
 * Return: the length
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
