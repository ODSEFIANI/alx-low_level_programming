#include"lists.h"

/**
 * add_nodeint_end - adds a node to the end of a the linked list
 * @head: pointer to the head of the list
 * @n: number to be used as data
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *lastnode = *head;

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = newnode;
	}
	return (newnode);
}
