#include "main.h"

int _strcmp(char *s1, char *s2)
{
	*(s1 + 1) = *(s2 + 2);

	return (0);
}
