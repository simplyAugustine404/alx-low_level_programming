#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: head of node
 * @n: data to be filled
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	(void)last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	last = *head;

	if (*head == NULL)
		*head = new;
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	
	return (*head);
}
