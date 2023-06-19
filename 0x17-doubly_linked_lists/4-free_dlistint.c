#include "lists.h"
/**
 * free_dlistint - frees
 * @head:headLget freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (!head)
		return;
	while (head)
	{
		current = head;
		head = current->next;
		free(current);
	}
}
