#include "lists.h"
/**
 * delete_nodeint_at_index - delete a new node at the given position.
 * @head: the first node.
 * @index: the position of node.
 *
 * Return:  1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 1;
	listint_t *node, *h = *head;

	if (!head || !h)
		return (-1);
	if (index == 0)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
		return (1);
	}
	while (h)
	{
		if (index == j)
		{
			node = h->next;
			if (!node)
				return (-1);
			h->next = node->next;
			free(node);
			return (1);
		}
		h = h->next;
		j++;
	}
	return (-1);
}
