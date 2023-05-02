#include "lists.h"

/**
 * free_listint_safe - free a the linked list
 * @h: q pointer
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int i;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}
	*h = NULL;
	return (lenght);
}
