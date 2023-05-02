#include "lists.h"
/**
 * find_listint_loop - find the iterationg loop
 * @head: a pointer
 * Return: the address of node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev = head;
	listint_t *fi = head;

	if (!head)
		return (NULL);

	while (prev && fi && fi->next)
	{
		fi = fi->next->next;
		prev = prev->next;
		if (fi == prev)
		{
			prev = head;
			while (prev != fi)
			{
				prev = prev->next;
				fi = fi->next;
			}
			return (fi);
		}
	}
	return (NULL);
}

