#include "lists.h"
/**
 * reverse_listint - reverses the ordeer of  listint_t linked list.
 * @head: a list.
 *
 * Return:  a pointer to the first node of the reversed linkded list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h = *head, *node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	while ((*head)->next)
	{
		h = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = h;
	}
	(*head)->next = node;
	return (*head);
}
