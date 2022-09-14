#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: first parameter
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n < 9)
			{
				if (n < 0)
				{
					_putchar(45);
					_putchar((n * -1) / 10 + '0');
					_putchar((n * -1) % 10 + '0');
				}
				else
				{
					_putchar(n + '0');
					_putchar(44);
					_putchar(32);
				}
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(44);
				_putchar(32);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(44);
			_putchar(32);
		}
	}
}
