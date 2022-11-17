#include "main.h"

char *_strchr(char *s, char c)
{
	if (*(s + 1) == c)
		return (s + 1);
	else
		return (s + 0);
}
