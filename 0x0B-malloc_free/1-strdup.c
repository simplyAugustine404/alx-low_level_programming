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
	unsigned int i;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(str));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	free(s);
	return (s);
}
