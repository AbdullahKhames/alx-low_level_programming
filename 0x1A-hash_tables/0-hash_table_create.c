#include "hash_tables.h"
/**
 * hash_table_create - creating hash table
 * @size: max size for the hash table
 * Return: returns a pointer to the hash_table_t
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int idx;

	if (size <= 0)
	{
		return (NULL);
	}

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
	{
		perror("error allocating space for hash table");
		return (NULL);
	}
	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (!hashTable->array)
	{
		perror("error allocating array");
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
	{
		hashTable->array[idx] = NULL;
	}
	return (hashTable);
}

