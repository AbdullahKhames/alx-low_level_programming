#include "lists.h"

/**
 * add_node_end - function to addd to linked list from back
 * @head: pointer to pointer to list
 * @str: string
 * Return: retuns the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp = *head;

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
		new_node->len = _strlen(new_node->str);
	}
	if (temp)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
