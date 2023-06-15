#include "lists.h"

/**
* sum_dlistint - Sums all the data of a dlistint_t list
* @head: The head of the dlistint_t list
* Made by Oussama
* Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
    int total_sum = 0;

    while (head)
    {
        total_sum += head->n;
        head = head->next;
    }
    return total_sum;
}

