#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to be checked
 *
 * Return: pointer to first occurence of the character c in the string s, or NULL if charater is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
