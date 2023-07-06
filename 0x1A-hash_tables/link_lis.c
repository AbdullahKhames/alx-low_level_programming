#include "hash_tables.h"
/***/
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
/***/
char *link_index(hash_node_t *node, unsigned long int index)
{
	unsigned long int len = 0;
	hash_node_t *current;
	unsigned long int idx;
	
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
/***/
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
		return(NULL);
	}
	toAdd->key = key;
	toAdd->value = value;
	toAdd->next = node;
	return (toAdd);
}
