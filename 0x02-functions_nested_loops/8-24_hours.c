#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 */

void jack_bauer(void)
{
	int n, m;

	for (n = 0; n <= 23; n++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(58);
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
