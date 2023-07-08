#include "hash_tables.h"

/**
* create_hash_table - function that creates a hash table
* @table_size: size of the hash table
*
* Return: pointer to the newly created hash table
*/
hash_table_t *create_hash_table(unsigned long int table_size)
{
    hash_table_t *hash_table;
    hash_node_t **array;
    unsigned long int i;

    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return (NULL);

    array = malloc(sizeof(hash_node_t *) * table_size);
    if (array == NULL)
        return (NULL);

    for (i = 0; i < table_size; i++)
        array[i] = NULL;

    hash_table->array = array;
    hash_table->size = table_size;

    return (hash_table);
}

