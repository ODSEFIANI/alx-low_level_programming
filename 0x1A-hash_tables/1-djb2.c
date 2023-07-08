#include "hash_tables.h"

/**
 * hash_djb2 - Function that calculates the hash value for a given string.
 *
 * @str: The string to calculate the hash value for.
 *
 * Return: The hash value (index) at which the key/value will be stored in the hash table.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int character;

    hash = 5381;
    while ((character = *str++))
    {
        hash = ((hash << 5) + hash) + character; /* hash * 33 + character */
    }
    return hash;
}

