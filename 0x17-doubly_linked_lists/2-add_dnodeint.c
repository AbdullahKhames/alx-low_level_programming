#include "lists.h"
/**
 * add_dnodeint - fun
 * @head: head
 * @n: n
 * Return: r
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *prev;

	if (!head)
		return (NULL);

	if(!*head)
	{
		current = malloc(sizeof(dlistint_t));
		if (!current)
		{
			perror("failed");
			return (NULL);
		}
		current->n = n;
		current->prev = NULL;
		current->next =NULL;
		*head = current;
		return current;
	}

	current = *head;

	prev = malloc(sizeof(dlistint_t));
	if (!prev)
		{
			perror("failed");
			return (NULL);
		}
	prev->n = n;
	prev->prev = NULL;
	prev->next = current;
	current->prev = prev;
	return (prev);
}
