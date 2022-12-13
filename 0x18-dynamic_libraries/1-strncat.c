#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	*(dest + n) = *(src + n);

	return (dest);
}
