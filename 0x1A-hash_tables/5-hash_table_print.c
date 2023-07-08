#include "hash_tables.h"

/**
 * hash_table_print - function to print hash table
 * @ht: hash table to be printed
*/
void hash_table_print(const hash_table_t *ht)
{
	size_t i = 0;
	int printed = 0;
	hash_node_t *node;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (printed)
			{
				printf(",");
			}
			printf("\'%s\': \'%s\'", node->key, node->value);
			printed = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
