#include "lists.h"

/**
* add_dnodeint - add a node
* @head: pointer to head
* @n: new node to add
* Made By Oussama
* Return: new
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}

