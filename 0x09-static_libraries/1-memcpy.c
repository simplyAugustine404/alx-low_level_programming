#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	*(dest + 1) = *(src + 1);

	return (dest);
}
