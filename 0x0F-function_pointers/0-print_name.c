#include "main.h"
#include <stddef.h>

/**
 * print_name - prints a name
 *
 * @name: name of the person
 * @f: function to modify
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
