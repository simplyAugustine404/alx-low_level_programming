#include "lists.h"

/**
 * free_listint - fress a linked list
 *
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while ((temp = head) !+ NULL)
	{
		head = head->next;
		free(temp);
	}
}
