#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	dest[1] = src[n];

	return (dest);
}
