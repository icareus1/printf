#include "main.h"
/**
 * count_digits - Counts the number of digits in an integer.
 * @n: The integer to count the digits of.
 *
 * Return: The number of digits in the integer.
 */
int count_digits(int n)
{
	int count = 0;

	if (n == 0)
		return (1);

	while (n != 0)
	{
		n /= 10;
		count++;
	}

	return (count);
}
