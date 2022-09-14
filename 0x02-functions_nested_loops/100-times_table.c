#include "main.h"
#include <stdio.h>

/**
 * print_times_tables - prints the n times table starting with 0
 * @n: first parameter
 *
 */

void print_times_table(int n)
{
	int m, ans, j;

	if (n > 15 || n < 0)
		n = 0;
	else
	{
		for (m = 0; m <= n; m++)
		{
			for (j = 0; j <= n; j++)
			{
				ans = m * n;
				printf("%d, ", ans);
			}
		}
	}
}

