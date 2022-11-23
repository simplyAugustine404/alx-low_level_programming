#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	long int previous = 1, next = 2, sum = 0;
	int k;

	while (next < 4000000)
	{
		if (next % 2 == 0)
			sum += next;

		k = next;
		next += previous;
		previous = k;

	}
	printf("%lu\n", sum);

	return (0);
}
