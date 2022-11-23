#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int i, previous = 1, current = 2, next;

	printf("1, 2, ");

	for (i = 0; i < 48; i++)
	{
		next = current + previous;
		previous = current;
		current = next;
		if (i == 47)
			printf("%d\n", next);
		else
			printf("%d, ", next);
	}

	return (0);
}