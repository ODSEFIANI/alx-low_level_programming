#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Function that adds or updates an element in the hash table.
 *
 * @ht: The hash table.
 * @key: The key for the element.
 * @value: The value associated with the key.
 *
 * Returns: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = 0;
    hash_node_t *new_node = NULL;
    hash_node_t *temp = NULL;

    if (!ht || !key || !(*key) || !value)
        return 0;

    index = key_index((unsigned char *)key, ht->size);
    temp = ht->array[index];

    // Check if key exists
    while (temp && strcmp(temp->key, key) != 0)
        temp = temp->next;

    // Update value if key already exists
    if (temp)
    {
        free(temp->value);
        temp->value = strdup(value);
        return 1;
    }

    // Add new node if key not found
    new_node = malloc(sizeof(*new_node));
    if (!new_node)
        return 0;

    new_node->key = strdup(key);
    new_node->value = strdup(value);

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}

