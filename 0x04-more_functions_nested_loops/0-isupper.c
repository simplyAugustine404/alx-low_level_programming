#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return(1);
	else
		return (0);
}
