#include "lists.h"
/**
 * insert_dnodeint_at_index - function too insert at a given index
 * @h: list to insert into
 * @idx: index to insert at
 * @n: the number to be added
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	/*dlistint_t *next;*/
	dlistint_t *new_node;
	unsigned int counter = 0;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		perror("failed malloc");
		return (NULL);
	}
	new_node->n = n;

	if (!*h && n > 0)
	{
		return(NULL);
	}
	else if (!*h && n == 0)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
	}
	else
	{
		current = *h;
		while (current->next)
		{

			if (counter == idx)
			{
				new_node->next = current->next;
				new_node->prev = current;
				current->next = new_node;
				break;
			}
			counter++;
			current = current->next;
		}
	}
	if (idx > counter)
		return (NULL);
	return(new_node);
}
