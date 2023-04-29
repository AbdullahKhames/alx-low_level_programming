#include "lists.h"

/**
 * listint_len - length
 * @h: the list
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	listint_t *current = h;
	size_t i = 0;

	if (!h)
		return (i);

	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
