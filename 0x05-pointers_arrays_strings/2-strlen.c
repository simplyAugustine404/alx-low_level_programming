#include "main.h"

/**
 *
 * _strlen - return the length of a string
 *
 * @s: pointer to string
 * Return: length
 */

int _strlen(char *s)
{
	char v[] = *s;
	int n, i;

	n = 0;
	while (v[i] != '\0')
	{
		n += 1;
		i++;
	}
	return (n);
}
