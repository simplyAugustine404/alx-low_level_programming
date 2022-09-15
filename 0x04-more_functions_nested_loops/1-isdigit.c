#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: char to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (48 <= c && c >= 57)
		return (1);
	else
		return (0);
}
