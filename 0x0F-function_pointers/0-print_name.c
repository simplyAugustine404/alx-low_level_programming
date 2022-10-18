#include "main.h"
#include <stdio.h>

/**
 * print_name - prints a name
 *
 * @name: name of the person
 * @f: function to modify
 */

void print_name(char *name, void (*f)(char *))
{
	f(*name);
}
