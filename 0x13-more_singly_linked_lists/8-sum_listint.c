#include "lists.h"

/**
 * sum_listint -  get the sum of all the data (n) in the listint_t
 * @head: head of a linked list
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	sum = 0;
	if (head == NULL)
		return (sum);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
