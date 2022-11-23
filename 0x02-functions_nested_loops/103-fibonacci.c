#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	long int previous = 1, current = 2, next, sum = 0;

	while (next < 4000000)
	{
		if (next % 2 == 0)
			sum += next;

		next = current + previous;
		previous = current;
		current = next;

	}
	printf("%lu\n", sum);

	return (0);
}
