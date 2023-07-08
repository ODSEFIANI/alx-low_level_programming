#ifndef __HASH_TABLES_H__
#define __HASH_TABLES_H__

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct shash_node_s - Node of a rted hash table
 * @key: The uniqustring
 * @value: The value coronding to the key
 * @next: A pointer to the next node of the list
 * @sprev: A pointer to ths element of the sorted linked list
 * @snext: A poine nef the sorted linked list
 */
typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorttable data structure
 * @size: The size of the array
 * @array: An arrzlision handling method.
 * @shead: A pointer to tt element of the sorted linked list
 * @stail: A pointer to nt of the sorted linked list
 */
typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;

/**
 * struct hash_node_s - Node of a hash table
 * @key: The unique string
 * @value: The valsponding to the key
 * @next: A pointer te of the list
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash tabla structure
 * @size: The size of the 
 * @array: An array ofable llision handling method.
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;


hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif /* __HASH_TABLES_H__ */

