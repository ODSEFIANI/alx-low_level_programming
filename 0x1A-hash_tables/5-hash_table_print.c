#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints the keys and values of the hash table.
 *
 * @ht: Pointer to the hash table.
 *
 * Return: No return value.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 0)
				flag = 1;
			else
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}

	printf("}\n");
}
