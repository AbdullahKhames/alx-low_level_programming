#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete given index
 * @head: the list to deelete frome
 * @index: the index to be deleted
 * Return: 1 if success
 *	-1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int x = 0;

	if(head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		current = current->next;
		(*head)->next = current;
	}
	while (current)
	{
		if (x == index)
			break;
		previous = current;
		current = current->next;
	}

	previous->next = current->next;

	free(current);

	return (1);

}
