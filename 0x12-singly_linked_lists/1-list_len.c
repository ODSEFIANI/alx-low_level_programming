#include "lists.h"
/**
 * list_len - number of elements of linked list
 * @h: a points to a list
 *
 * Return: the number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	int I = 0;

	while (h)
	{
		I++;
		h = h->next;
	}
	return (i);
}
