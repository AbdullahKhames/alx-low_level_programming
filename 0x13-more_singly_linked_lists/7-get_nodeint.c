#include "lists.h"

/**
 * get_nodeint_at_index - function to get the node requested
 * @head: the linked list
 * @index: the index requested
 * Return: returns the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int x = 0;

	if (!head)
		return (NULL);
	current = head;
	while (current != NULL)
	{
		if (x == index)
			break;
		current = current->next;
		x++;
	}
	return (current);
}
