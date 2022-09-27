#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: initial segment
 * @accept: substring
 *
 * Return: number of bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int n = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (*(s + i) == *(accept + j))
				n++;
		}
	}
	return (n);
}
