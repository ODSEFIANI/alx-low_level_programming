#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list_t list
 * @head: Const double pointer to stricter
 * @str: char pointer to  data
 * Return: List new node for list_t list, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int j;
	list_t *new;
	list_t *temp;

	new  = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		;

	if (*head == NULL)
	{
		*head = new;
		new->len = j;
		new->str = strdup(str);
		new->next = NULL;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	new->len = j;
	new->str = strdup(str);
	new->next = NULL;

	return (new);

}
