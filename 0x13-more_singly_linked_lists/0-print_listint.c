/**
 * print_listint - prints the elemnets of linked list(node by node)
 * @h:constant pointer to a structer node
 *
 * Return:number of elments in linked list
 */


size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
	printf("%d\n", h->n)
	h = h->next;
	count++;
	}
	return (count);
}
