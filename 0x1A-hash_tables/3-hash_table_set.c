#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/** by noguiaa */

/**
 * hash_table_set - Add an element to the hash table.
 *
 * @ht: The hash table.
 * @key: The given key.
 * @value: The given value.
 *
 * Return: 1 (Success) | 0 (Failure).
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node;
    char *value_dup, *key_dup;

    if (!ht || (!key || !(*key)) || !value)
        return 0;

    index = key_index((unsigned char *)key, ht->size);

    value_dup = strdup(value);
    if (!value_dup)
        return 0;

    /* Update value if key already exists */
    new_node = ht->array[index];
    while (new_node)
    {
        if (!strcmp(new_node->key, key))
        {
            free(new_node->value);
            new_node->value = value_dup;
            return 1;
        }
        new_node = new_node->next;
    }

    key_dup = strdup(key);
    if (!key_dup)
    {
        free(value_dup);
        return 0;
    }

    /* Otherwise, add new element */
    new_node = malloc(sizeof(*new_node));
    if (!new_node)
        return 0;
    new_node->key = key_dup;
    new_node->value = value_dup;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return 1;
}

