#inlcude "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: first node
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	for(; h != NULL; i++)
	{
		h = h->next;
	}

	return (n);
}
