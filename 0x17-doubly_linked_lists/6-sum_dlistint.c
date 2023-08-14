#include "lists.h"
/**
 * sum_dlistint - function summs all of items in list
 * @head: list head
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
