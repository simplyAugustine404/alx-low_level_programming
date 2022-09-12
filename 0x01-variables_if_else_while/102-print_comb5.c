#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int k, l, m, n;

	for (k = 48; k <= 57; k++)
	{
		for (l = 48; l <= 57; l++)
		{
			putchar(k);
			putchar(l);
			putchar(32);
			for (m = 48; m <= 57; m++)
			{
				for (n = 48; n <= 57; n++)
				{
					if ((k <= m) && (n < l))
					{
						if (n < m)
						{
							putchar(m);
							putchar(n);
						}
						if (k == 57 && l == 56)
						{
							if (m == 57 && n == 57)
								break;
						}
						else
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
