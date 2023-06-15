#include "lists.h"

/**
* dlistint_len - print double linked list
* @head: pointer list
* Made by Oussama
* Return: nodes
*/

size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;

	for (; head; count++)
		head = head->next;

	return (count);
}

