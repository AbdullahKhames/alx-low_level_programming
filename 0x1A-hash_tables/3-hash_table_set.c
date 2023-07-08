#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - function to add to table
 * @ht: table to add to
 * @key: the key to calculate upon
 * @value: the value to be stored
 * Return: the index that we stored in
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *val;
	char *k;
	int key_idx;
	hash_node_t *node;

	if (!key || strcmp(key, "") == 0 || !ht || !ht->array)
	{
		return (0);
	}
	val = _strdup(value);
	k = _strdup(key);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
		{
			return (0);
		}

		node->key = k;
		node->value = val;
		node->next = NULL;
		ht->array[idx] = node;
		return (1);
	}
	else
	{
		key_idx = update_if_key_in_list(ht->array[idx], k, val);
		if (key_idx == 0)
		{
			ht->array[idx] = link_add(ht->array[idx], (char *)key, (char *)value);
		} else if (key_idx == 2)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * _strdup - function to copy str
 * @src: src
 * Return: number of char copied
 */
char *_strdup(const char *src)
{
	int l1;
	int idx = 0;
	char *dest;

	if (!src)
	{
		return (NULL);
	}

	l1 = _strlen(src);
	dest = malloc(sizeof(char) * (l1 + 1));
	if (!dest)
	{
		perror("cannot allocate memory");
		return (NULL);
	}

	for (; idx < l1; idx++)
	{
		dest[idx] = src[idx];
	}
	dest[idx] = '\0';
	return (dest);
}

/**
 * _strlen - funtion to get length
 * @src: src
 * Return: returns length
 */
int _strlen(const char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * link_add - adds to the begining of  a linked list
 * @node: head
 * @key: key to be added
 * @value: value to be added
 * Return: returns hash node
*/
hash_node_t *link_add(hash_node_t *node, char *key, char *value)
{
	hash_node_t *toAdd;

	if (!node)
	{
		return (NULL);
	}
	toAdd = malloc(sizeof(hash_node_t));
	if (!toAdd)
	{
		perror("error");
		return (NULL);
	}
	else
	{
		toAdd->key = _strdup(key);
		toAdd->value = _strdup(value);
		toAdd->next = node;
	}
	return (toAdd);
}
/**
 * update_if_key_in_list - function to check if key persent in list or not
 * @head: head
 * @key: key
 * @value: val
 * Return: item order if present
*/
int update_if_key_in_list(hash_node_t *head, char *key, char *value)
{
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
			free(current->value);
			current->value = _strdup(value);
			if (!current->value)
			{
				perror("error allocating memory");
				return (2);
			}

			return (1);
		}
		current = current->next;
	}

	return (0);
}
