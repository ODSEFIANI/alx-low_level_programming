#include "lists.h"
/**
 * a - make a new the  arrayay of nodes with new node
 * @old: the old list to appendgy
 * @size: size of the new array in lik
 * @new: new node to add to the arrayji
 *
 * Return: pointer to the new arraygu
 */
const listint_t **a(const listint_t **old, size_t size, const listint_t *new)
{
	const listint_t **array;
	size_t i;

	array = malloc(size * sizeof(listint_t *));
	if (!array)
	{
		free(old);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		array[i] = old[i];
	array[i] = new;
	free(old);
	return (array);
}
/**
 * print_listint_safe - reverses the listint_t linked list.
 * @head: the list.
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0, i;
	const listint_t **array = NULL;

	while (head)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(array);
				return (size);
			}
		}
		size++;
		array = a(array, size, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(array);
	return (size);
}
