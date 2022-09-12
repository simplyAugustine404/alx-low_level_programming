#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int l, m, n;

	for (l = 48; l <= 57; l++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (n = 48; n <= 57; n++)
			{
				if ((m > l) && (n > m))
				{
					putchar(l);
					putchar(m);
					putchar(n);
					if (n == 57)
					{
						if ((m == 56) && (l == 55))
						{
							break;
						}
					}
					putchar(44);
					putchar(32);
				}
			}
		}
	}	
	putchar(10);
	return (0);
}
