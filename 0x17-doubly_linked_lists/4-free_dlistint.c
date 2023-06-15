#include "lists.h"

/**
* free_dlistint - Frees a linked dlistint_t list
* @h: The headdlistint_t list
* Made by oussama
*/

void free_dlistint(dlistint_t *h)
{
	dlistint_t *temp;

	while (h)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
}

