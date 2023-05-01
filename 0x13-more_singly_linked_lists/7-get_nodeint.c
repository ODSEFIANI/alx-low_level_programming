/**
 * get_nodeint_at_index - returns the node at certain index in the linked list
 * @head: 1sth node in the linked list
 * @index: number  of the node to return
 *
 * Return: pointer to the node with the exact index, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	i = 0;
	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
