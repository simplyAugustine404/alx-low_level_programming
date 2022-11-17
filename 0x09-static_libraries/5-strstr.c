#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	*(haystack + 1) = *(needle + 1);

	return (haystack);
}
