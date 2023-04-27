#include "lists.h"
/**
 * print_list - prints all the elements of a structure 
 * @h: pointer to the list(nodes)
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int I = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		I++;
		h = h->next;
	}
	return (i);
}
