#include "hash_tables.h"
#include <string.h>
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
/**
 * link_index - func
 * @node: node
 * @index: index
 * Return: returns at given index
 */
char *link_index(hash_node_t *node, unsigned long int index)
{
	unsigned long int len = 0;
	hash_node_t *current;
	unsigned long int idx;

	if (!node)
	{
		return (NULL);
	}
	current = node;
	while (current)
	{
		idx = hash_djb2((const unsigned char *)current->key);
		if (index == idx)
		{
			return (current->value);
		}
		len++;
		current = current->next;
	}
	return (NULL);
}
/**
 * key_in_list - function to check if key persent in list or not
 * @head: head
 * @key: key
 * Return: item order if present
*/
int key_in_list(hash_node_t *head, char *key)
{
	int i = 0;
	hash_node_t *current;

	if (!head)
	{
		return (0);
	}

	current = head;

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (i + 1);
		}
		i++;
		current = current->next;
	}

	return (0);
}
/**
 * replace_value_at_idx - function to check if key persent in list or not
 * @head: head
 * @value: key
 * @idx: key
*/
void replace_value_at_idx(hash_node_t *head, char *value, int idx)
{
	hash_node_t *current;

	int counter = 0;

	if (!head || !value)
	{
		return;
	}

	current = head;
	idx -= 1;
	while (current)
	{
		if (counter == idx)
		{
			free(current->value);
			current->value = value;
			return;
		}
		counter++;
		current = current->next;
	}

}
