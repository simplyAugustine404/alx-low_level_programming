#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 *
 */

void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (*(s + i) == '\0')
	{
		_putchar('\n');
	}
	_putchar(*(s + i) + '0');
	_puts_recursion(s + 1);
}
