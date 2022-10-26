#include "lists.h"

/**
 * list_len - return number of elements
 * @h: linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
