#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to memory where filling starts
 * @b: constrant byte to use fro filling
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		*(s + n) = b;
		n++;
	}
	return (s);
}
