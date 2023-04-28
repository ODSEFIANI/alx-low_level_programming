#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a next node at the beginning of a list_t list
 * @head: Const double pointer of structure list_t for beginning
 * @str:  char pointer of data
 * Return: next node for list_t list, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{

	unsigned int i;
	list_t *ultimate;

	ultimate = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		ultimate->str = NULL;
		ultimate->len = 0;
		ultimate->next = *head;
	}

	if (ultimate  == NULL)
		return (NULL);

	ultimate->next = *head;
	*head = new;

	ultimate->str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	ultimate->len = i;

	return (ultimate);
}
