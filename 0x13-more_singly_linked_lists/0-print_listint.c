#include "lists.h"

/**
 * print_listint - prints list
 * @h: the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t i = 0;

	if (!h)
		return (i);

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
