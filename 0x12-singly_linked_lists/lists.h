#ifndef _LISTS_
#define _LISTS_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of string
 * @next: next node
 *
 * Description: singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(int c);
size_t print_list(const lits_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
