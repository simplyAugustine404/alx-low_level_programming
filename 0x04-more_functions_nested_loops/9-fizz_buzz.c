#include <stdio.h>

/**
 * main - Fizz Buzz challenge
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			if (n == 100)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d ", n);
			}
		}
	}
	return (0);
}
