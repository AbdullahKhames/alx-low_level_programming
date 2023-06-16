#include "lists.h"
/***/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (!head)
		return (0);

	current = head;
	while (current->next)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
