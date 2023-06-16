#include "lists.h"
/**
 * dlistint_len - function to find length
 * @h: list
 * Return: size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current;

	if (!h)
		return (0);

	current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
