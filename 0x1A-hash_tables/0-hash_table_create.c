#include "hash_tables.h"
/**
 * hash_table_create - creating hash table
 * @size: max size for the hash table
 * Return: returns a pointer to the hash_table_t
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hashTable;
    
    if (size <= 0)
    {
        return NULL;
    }

    hashTable = malloc(sizeof(hash_table_t) * size);
    if (!hashTable)
    {
        perror("error allocating space for hash table");
        return NULL;
    }

    return hashTable;
}