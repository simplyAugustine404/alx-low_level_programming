#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 *
 */

void puts2(char *str)
{
	int n = 0;

	while (n >= 0)
	{
		if (str[n] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (n % 2 == 0)
			_putchar(str[n]);
		n++;
	}
}
