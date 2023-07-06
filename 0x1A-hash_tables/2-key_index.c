#include "hash_tables.h"
/**
 * key_index - fnction return index of  a key
 * @key: key
 * @size: table size
 * Return: returns the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;
	
	if (size <= 0 || key == NULL)
	{
		return (0);
	}
	idx = hash_djb2(key) % size;
	return (idx);
}
