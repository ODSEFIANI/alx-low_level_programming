#include "lists.h"
/**
 * pop_listint - deletes the head node of linked list
 * @head : points to the head of a linked list
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *lastnode;
	int n;

	lastnode = *head;

	if (lastnode == NULL)
		return (0);

	*head = lastnode->next;
	n = lastnode->n;
	free(lastnode);
	return (n);
}
