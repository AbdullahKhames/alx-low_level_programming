#include "lists.h"

/**
 * add_node - adds node
 * @head: pointer to pointer
 * @str: string
 * Return: retuuns new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node || !head)
		return (NULL);

	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(str);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}


