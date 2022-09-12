#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int m, n;

	for (n = 0; n <= 9; n++)
	{
		for ( m = 0; m <= 9; m++)
		{
			_putchar(m * n + '0');
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
}
