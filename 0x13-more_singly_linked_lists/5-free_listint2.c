#include "lists.h"
/**
 * free_listint2 - frees the head of linked list
 * @head : points to list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		head = NULL;
	}
	else
		return;
}
