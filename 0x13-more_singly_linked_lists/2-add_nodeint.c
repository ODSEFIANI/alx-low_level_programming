#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add nodes to the first elemnets of linked list
 * @head:constant double pointer to a structer node
 * @n:int value
 *
 * Return:number of elments in linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL
		free(newnode);
	return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
