#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to duplicate of a string
 * @str: string to be duplictaed
 *
 * Return: pointer to duplicate string, or NULL if unsuccessful
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
		;
	}

	s = malloc(sizeof(char) * (j + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
