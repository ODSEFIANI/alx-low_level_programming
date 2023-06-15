#include "lists.h"

/**
* print_dlistint - print double linked list
* @head: list
* Made by OUSSAMA SEFIANI
* Return: nodes
*/

size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0;

	for (; head; count++, head = head->next)
		printf("%d\n", head->n);

	return (count);
}

