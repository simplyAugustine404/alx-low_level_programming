#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to be checked
 *
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int ret;

	ret = n % 10;
	if (ret <= 9)
	{
		_putchar('0' + ret);
	}
	else
	{
		_putchar(ret / 10 + '0');
		_putchar(ret % 10 + '0');
	}
	return (ret);
}
