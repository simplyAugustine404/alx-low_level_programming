#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int m, n;
	int ans;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			ans = m * n;
			if (ans <= 9)
			{
				_putchar('0' + ans);
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar(ans / 10 + '0');
				_putchar(ans % 10 + '0');
				_putchar(44);
				_putchar(32);
			}
			_putchar('\n');
		}
	}
}
