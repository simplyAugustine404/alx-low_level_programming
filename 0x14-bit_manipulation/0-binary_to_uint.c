#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int i, ret;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		;
	}

	for (i--, ret = 1; i >= 0; i--, ret *= n 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			ui += ret;
		}

	}

	return (ui);
}
