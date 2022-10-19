#include "main.h"
#include <stdlib.h>

/**
 * create_array -m createsn an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: char to be used for initialization
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(c) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}

