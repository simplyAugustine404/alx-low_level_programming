#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	unsigned int n;

	for (i = 0; *(needle + i) != '\0'; i++)
		n = i;
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (*(haystack + i) == *(needle + j))
				return (haystack + i);
		}
	}
}
