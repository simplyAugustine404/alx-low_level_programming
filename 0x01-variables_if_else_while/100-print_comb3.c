#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int m, n;

	for (m = 48; m <= 57; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			if (n != m && m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	return (0);
}
