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
	_putchar(ret + '0');
	return (ret);
}
