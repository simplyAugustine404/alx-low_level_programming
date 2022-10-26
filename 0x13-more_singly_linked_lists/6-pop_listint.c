#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: head of the list
 *
 * Return: head of the node's data
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h, *c;

	if (*head == NULL)
		return (0);

	c = *head;
	hnode = c->n;
	h = c->next;

	free(c);

	*head = h;

	return (hnode);
}
