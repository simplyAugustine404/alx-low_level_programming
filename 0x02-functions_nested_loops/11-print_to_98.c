#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: first parameter
 */

void print_to_98(int n)
{
	if (n == 98)
		_putchar(n +'0');
	else if (n < 98)
	{
		for (n; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(44);
			_putchar(32);
		}
	}
	else
	{
		for (n; n >= 98; n--)
		{
			_putchar(n + '0');
			_putchar(44);
			_putchar(32);
		}
	}
}
