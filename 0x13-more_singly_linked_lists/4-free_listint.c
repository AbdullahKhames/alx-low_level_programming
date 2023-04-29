#include "lists.h"

/**
 * free_listint - frees the list
 * @head: the list to free
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	if (!head)
		return;

	while (current->next)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
}
