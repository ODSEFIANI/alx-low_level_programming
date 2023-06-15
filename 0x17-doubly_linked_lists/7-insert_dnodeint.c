#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node in a dlistint list
* @head: A pointer to the head of the dlistint_t list
* @idx: The position to insert the new node
* @data: The integer for the new node to contain
* Made by Oussama
* Return: If the function fails - NULL.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int data)
{
    dlistint_t *temp = *head, *new_node;

    if (idx == 0)
        return add_dnodeint(head, data);

    for (; idx != 1; idx--)
    {
        temp = temp->next;
        if (temp == NULL)
            return NULL;
    }
    if (temp->next == NULL)
        return add_dnodeint_end(head, data);

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = data;
    new_node->prev = temp;
    new_node->next = temp->next;
    temp->next->prev = new_node;
    temp->next = new_node;

    return new_node;
}

