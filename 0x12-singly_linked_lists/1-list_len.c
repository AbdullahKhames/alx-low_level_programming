#include "lists.h"

/**
 * list_len - function to calculate how many items in list
 * @h: the list given
 * Return: return number of items on lisr
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t i = 0;

	if (!h)
		return (i);

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
