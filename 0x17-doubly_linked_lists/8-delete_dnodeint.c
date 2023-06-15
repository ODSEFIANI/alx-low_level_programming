#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes a node from a dlistint_t
* @head: A pointer to the head of the dlistint_t
* @idx: The index of the node to delete
* Made by Oussama
* Return: Upon success or fails
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
    dlistint_t *temp = *head;

    if (*head == NULL)
        return (-1);

    for (; idx != 0; idx--)
    {
        if (temp == NULL)
            return (-1);
        temp = temp->next;
    }
    if (temp == *head)
    {
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
    }
    else
    {
        temp->prev->next = temp->next;
        if (temp->next != NULL)
            temp->next->prev = temp->prev;
    }
    free(temp);
    return (1);
}

