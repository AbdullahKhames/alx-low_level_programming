#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - function to get value
 * @ht: table to check
 * @key: key to get its value
 * Return: value associated with key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	int idx;
	hash_node_t *node;

	if (!ht || !key)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *) key, ht->size);

	if (ht->array[idx] == NULL)
	{
		return (NULL);
	}
	else
	{
		node = ht->array[idx];
		while (node)
		{
			if (strcmp(node->key, key) == 0)
			{
				value = node->value;
				return (value);
			}

			node = node->next;
		}

	}

	return (value);
}
