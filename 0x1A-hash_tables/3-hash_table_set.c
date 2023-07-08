#include "hash_tables.h"
#include <string.h>
int _strlen(const char *src);
char * _strcpy(const char *src,  char *dest);

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


	
	if (!key || strcmp(key, "") == 0 || !ht || !ht->array)
	{
		return(0);
	}
	val = _strcpy(value, val);
	k = _strcpy(key, k);
	idx = key_index((const unsigned char *)key, 1024);
	if(ht->array[idx] == NULL)
	{
		
		printf("in if\n");
		ht->array[idx] = malloc(sizeof(hash_node_t *));
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
		ht->array[idx] = link_add(ht->array[idx], k, val);
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
	dest = malloc(sizeof(char) * (l1+1));
	if(!dest)
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

	while (*src++)
	{
		x++;
	}
	return (x);
}
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
hash_node_t *link_add(hash_node_t *node, char *key, char *value)
{
        hash_node_t *toAdd;

        if (!node)
        {
                return (NULL);
        }
        toAdd = malloc(sizeof(hash_node_t *));
        if (!toAdd)
        {
                perror("error");
                return(NULL);
        }
        toAdd->key = key;
        toAdd->value = value;
        toAdd->next = node;
        return (toAdd);
}
       
