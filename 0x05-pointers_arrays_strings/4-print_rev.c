#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be reversed
 *
 */

void print_rev(char *s)
{
	int n = 0;

	while (n >= 0)
	{
		if (s[n] == '\0')
			break;
		n++;
	}
	for (n--; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
