#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to string, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	k = i;
	for (; s2[i] != '\0'; i++)
	{
		;
	}

	s = malloc(sizeof(char) * (i + 2));
	if (s ==NULL)
		return (NULL);
	for (j = 0; j < k; j++)
	{
		s[j] = s1[j];
	}
	for (; j <= i; j++)
	{
		s[j] = s2[k];
	}
	//s[j + 1] = '\0';

	return (s);
}

