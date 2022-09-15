#include "main.h"

/**
 * more_numbers - prints 10 times the numbers fro 0-14
 *
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; 1++)
	{
		if (i > 9)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
