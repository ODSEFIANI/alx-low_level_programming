#include "lists.h"

/**
* get_dnodeint_at_index - Locates a node in a dlistint_t list
* @head: The head of the dlistint_t list
* @idx: The node to locate
* Made by Oussama
* Return: NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int idx)
{
    for (; idx != 0; idx--)
    {
        if (head == NULL)
            return NULL;
        head = head->next;
    }
    return head;
}

