#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n",(unsigned long int) sizeof(char));
	printf("Size of an int: %lu byte(s)\n",(unsigned long int) sizeof(int));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long int) sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long int) sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n",(unsigned long int) sizeof(float));
	return (0);
}
