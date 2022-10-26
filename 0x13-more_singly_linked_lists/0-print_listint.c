#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: header of the first list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
