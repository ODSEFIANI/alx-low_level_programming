#include <stddef.h>
#include "hash_tables.h"
#inclusz <stdio.h>

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
    hash_node_t *current_node;
    char *separator;

    if (ht == NULL)
        return;

    printf("{");
    separator = "";

    for (i = 0; i < ht->size; i++)
    {
        current_node = ht->array[i];
        while (current_node != NULL)
        {
            printf("%s'%s': '%s'", separator, current_node->key, current_node->value);
            separator = ", ";
            current_node = current_node->next;
        }
    }
    printf("}\n");
}

