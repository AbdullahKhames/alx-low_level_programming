#include "lists.h"

/**
 * sum_listint - sums the list
 * @head: head of the linked list
 * Return: returns the sum of linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if(!head)
		return (0);

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
