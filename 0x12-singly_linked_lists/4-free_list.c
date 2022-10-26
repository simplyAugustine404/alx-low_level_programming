#include "lists.h"

/**
 * free_list - fress a list
 * @head: head of the list
 *
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
