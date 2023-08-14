#include "lists.h"
/**
 *get_dnodeint_at_index - function to retrive nth elemnt
 *@head: list
 *@index: index to retrive
 *Return: nod
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *current;
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	current = head;
	while (current)
	{
		if (index == i)
		{
			return (current);
		}
		i++;
		current = current->next;
	}
	
	return (NULL);
}
