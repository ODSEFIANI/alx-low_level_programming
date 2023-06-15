#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a list
* @head: pointer to the head of the list
* @n: The inieier the new node
* Made by Oussama
* Return: NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *last;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = newNode;
	newNode->prev = last;

	return (newNode);
}

