#include "hash_tables.h"

/**
 * key_index - Function that generateshash table.
 *
 * @key: The keye generated.
 * @size: The sizetable.
 *
 * Return: The index athe hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    if (key == NULL || size == 0)
        return 0;
    return (hash_djb2(key) % size);
}

