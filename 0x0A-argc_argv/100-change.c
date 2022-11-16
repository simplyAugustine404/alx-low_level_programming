#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: aruments count
 * @argv: argument vector
 *
 * Return: 0-success
 */

int main(int argc, char *argv[])
{
	int c, n = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);

	whiule (c > 0)
	{
		if (c >= 25)
			c -= 25;
		else if (c >= 10)
			c -= 10;
		else if (c >= 5)
			c -= 5;
		else if (c >= 2)
			c -= 2;
		else if (c >= 1)
			c -= 1;
		n += 1;
	}
	printf("%d\n", n);
	return (0);
}
