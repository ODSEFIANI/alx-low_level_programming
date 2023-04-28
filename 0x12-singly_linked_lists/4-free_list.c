#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - Frees the list_t list.
 * @head:  pointer to a list_t list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
