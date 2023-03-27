#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int len, len2;
    int d = 12345;
    int i = -6789;
    char *s = "Hello, World!";
    char c = 'H';

    /* Testing character */
    len = _printf("Character: %c\n", c);
    len2 = printf("Character: %c\n", c);
    if (len == len2)
        printf("Lengths match: %d\n", len);
    else
        printf("Lengths do not match: %d and %d\n", len, len2);

    /* Testing string */
    len = _printf("String: %s\n", s);
    len2 = printf("String: %s\n", s);
    if (len == len2)
        printf("Lengths match: %d\n", len);
    else
        printf("Lengths do not match: %d and %d\n", len, len2);

    /* Testing percentage */
    len = _printf("Percent: %%\n");
    len2 = printf("Percent: %%\n");
    if (len == len2)
        printf("Lengths match: %d\n", len);
    else
        printf("Lengths do not match: %d and %d\n", len, len2);

    /* Testing integer */
    len = _printf("Integer: %d\n", d);
    len2 = printf("Integer: %d\n", d);
    if (len == len2)
        printf("Lengths match: %d\n", len);
    else
        printf("Lengths do not match: %d and %d\n", len, len2);

    /* Testing negative integer */
    len = _printf("Negative Integer: %d\n", i);
    len2 = printf("Negative Integer: %d\n", i);
    if (len == len2)
        printf("Lengths match: %d\n", len);
    else
        printf("Lengths do not match: %d and %d\n", len, len2);

    /* Testing NULL string */
   _printf("String: %\0\n");

    /* Testing multiple conversions */
    len = _printf("Multiple conversions: %c %s %d %%\n", c, s, d);
    len2 = printf("Multiple conversions: %c %s %d %%\n", c, s, d);
    if (len == len2)
        printf("Lengths match: %d\n", len);
    else
        printf("Lengths do not match: %d and %d\n", len, len2);

    /* Testing unknown conversion specifier */
	_printf("Unknown:[%r]\n");
	printf("Unknown:[r]\n");
    if (len == len2)
        printf("Lengths match: %d\n", len);
    else
        printf("Lengths do not match: %d and %d\n", len, len2);

if (len == len2)
printf("Lengths match: %d\n", len);
else
printf("Lengths do not match: %d and %d\n", len, len2);
/* Testing pointer conversion specifier */
len = _printf("Pointer: %p\n", (void *)0x12345678);
len2 = printf("Pointer: %p\n", (void *)0x12345678);
if (len == len2)
    printf("Lengths match: %d\n", len);
else
    printf("Lengths do not match: %d and %d\n", len, len2);

return (0);
}

