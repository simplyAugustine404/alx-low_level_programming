#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: pointer to string
 * Return: length
 */

int _strlen(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}
