#include "lists.h"

/**
 * add_node_end - adds a new node at th end
 * @head: start of node
 * @str: content of new node
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
	{
		;
	}

	new->len = n;
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
