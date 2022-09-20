#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 */

void rev_string(char *s)
{
	int n, m = 0;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}
	for(n--; n >= 0; n--)
	{
		_putchar(s[m]);
		m++;
	}
	_putchar('\n');
}
