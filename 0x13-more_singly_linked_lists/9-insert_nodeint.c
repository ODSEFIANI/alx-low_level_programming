#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of linked list
 * @idx: index to be inserted at
 * @n: integer data for inserted node
 * Return: address of new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *last;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	last = *head;
	i = 0;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (i == idx)
		{
			new->next = temp;
			last->next = new;
			return (new);
		}
		last = temp;
		temp = temp->next;
		i++;
	}
	if (idx == i)
	{
		last->next = new;
		return (new);
	}

	free(new);
	return (NULL);
}
