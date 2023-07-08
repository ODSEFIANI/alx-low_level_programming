#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 *
 * @ht: The hash table.
 * @key: The key.
 * @value: The value.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = 0;
    hash_node_t *new_node = NULL;
    hash_node_t *current_node = NULL;

    if (!ht || !key || !(*key) || !value)
        return 0;

    index = key_index((unsigned char *)key, ht->size);
    current_node = ht->array[index];

    /* Check if key exists */
    while (current_node && strcmp(current_node->key, key) != 0)
        current_node = current_node->next;

    /* Update value if key already exists */
    if (current_node)
    {
        free(current_node->value);
        current_node->value = strdup(value);
        return 1;
    }

    /* Add new node if key not found */
    new_node = malloc(sizeof(*new_node));
    if (!new_node)
        return 0;

    new_node->key = strdup(key);
    new_node->value = strdup(value);

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}

