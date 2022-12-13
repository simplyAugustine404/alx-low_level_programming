#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	*(accept + 1) = *(s + 3);

	return (s);
}
