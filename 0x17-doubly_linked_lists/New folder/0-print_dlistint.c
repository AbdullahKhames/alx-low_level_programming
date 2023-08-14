#include "lists.h"

/**
 * print_dlistint - function to print dlist
 * @h: header of theat dlist
 * Return: the size printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t len = 0;

	if (!h)
		return (0);
	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		len++;
		current = current->next;
	}

	return (len);
}
