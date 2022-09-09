#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 57)
		{
			putchar(n);
		}
		putchar(n);
		putchar(44);
		putchar(32);
	}
	return (0);
}
