#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int m, n, ans;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (n = 1; n <= 9; n++)
		{
			ans = m * n;
			if (ans / 10 > 0)
			{
				_putchar(ans / 10 + '0');
			}
			else
				_putchar(' ');
			_putchar(ans % 10 + '0');
			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
