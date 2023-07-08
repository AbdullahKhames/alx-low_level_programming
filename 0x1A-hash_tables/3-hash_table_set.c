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
	char *val = NULL;
	char *k = NULL;
	int key_idx;


	if (!key || strcmp(key, "") == 0 || !ht || !ht->array)
	{
		return (0);
	}

	val = _strcpy(value, val);
	k = _strcpy(key, k);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = malloc(sizeof(hash_node_t));
		if (!ht->array[idx])
		{
			return (0);
		}

		ht->array[idx]->key = k;
		ht->array[idx]->value = val;
		ht->array[idx]->next = NULL;
		return (1);
	}
	else
	{
		key_idx = key_in_list(ht->array[idx], k);
		if (key_idx == 0)
		{
			ht->array[idx] = link_add(ht->array[idx], (char *)key, (char *)value);
		}
		else
		{
			replace_value_at_idx(ht->array[idx], val, key_idx);
		}
		
	}
	return (1);
}

/**
 * _strcpy - function to copy str
 * @src: src
 * @dest: dest
 * Return: number of char copied
 */
char *_strcpy(const char *src, char *dest)
{
	int l1;
	int idx = 0;

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
 * link_length - function
 * @node: head
 * Return: int
*/
int link_length(hash_node_t *node)
{
	int len = 0;
	hash_node_t *current;

	current = node;
	while (current)
	{
		current = current->next;
		len++;
	}
	return (len);
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
/*/	if (strcmp(node->key, key) == 0)
	{
		toAdd->key = key;
		toAdd->value = value;
		toAdd->next = NULL;
	}*/
	else
	{
		toAdd->key = key;
		toAdd->value = value;
		toAdd->next = node;
	}
	return (toAdd);
}

int key_in_list(hash_node_t *head, char *key)
{
	int i = 0;
	hash_node_t *current;
	if(!head){
		return (0);
	}

	current = head;

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return i;
		}
		i++;
		current = current->next;
	}
	
	return (0);
}

void replace_value_at_idx(hash_node_t *head, char *value, int idx)
{
	hash_node_t *current;

	int counter = 0;

	if (!head || !value)
	{
		return;
	}

	current = head;

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