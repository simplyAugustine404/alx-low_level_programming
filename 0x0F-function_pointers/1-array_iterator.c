#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executres a function given as parameter on each array element
 * @size: size of the array
 * @array: array tpo be yused
 * @action: pointer to function to be used
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	for (; i < size; i++)
	{
		action(*(array + i));
	}
}
