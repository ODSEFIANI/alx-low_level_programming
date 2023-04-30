#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints the elemnets of linked list(node by node)
 * @h:constant pointer to a structer node
 *
 * Return:number of elments in linked list
 */


size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
