#include "lists.h"

/**
 * free_listint2 - function to free list of int
 * @head: pointer tro pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head)
		return;
	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
