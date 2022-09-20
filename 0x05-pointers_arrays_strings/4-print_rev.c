#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be reversed
 *
 */

void print_rev(char *s)
{
	int n;

	n = _strlen(s);
	while (n > 0)
	{
		_putchar(s[n]);
		n--;
	}
	s[n] = '\0';
	_putchar('\n');
}
