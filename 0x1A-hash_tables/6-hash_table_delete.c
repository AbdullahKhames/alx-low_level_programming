#include "hash_tables.h"

/**
 * hash_table_delete - delete the hash table
 * @ht: table to be deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (!ht)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		del_list(node);
	}
	free(ht->array);
	free(ht);

}
/**
 * del_list - function to delete list
 * @node: list to be deleted
*/
void del_list(hash_node_t *node)
{
	hash_node_t *current;
	hash_node_t *next;

	if (!node)
	{
		return;
	}
	current = node;
	while (current)
	{
		next = current->next;
		del_node(current);
		free(current);
		current = next;
	}


}
/**
 * del_node - function to delete list
 * @node: list to be deleted
*/
void del_node(hash_node_t *node)
{
	if (!node)
	{
		return;
	}
	if (node->key)
	{
		free(node->key);
	}

	if (node->value)
	{
		free(node->value);
	}

}
