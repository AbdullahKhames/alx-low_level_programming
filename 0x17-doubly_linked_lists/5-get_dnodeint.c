#include "lists.h"
/**
 *get_dnodeint_at_index - function to retrive nth elemnt
@head: list 
@index: index to retrive
@Return: nod
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint *current;


	if (!head || index < 0)
		return (NULL);
	current = head;
	while (current->next)
	{
		counter++;
		if (counter == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
