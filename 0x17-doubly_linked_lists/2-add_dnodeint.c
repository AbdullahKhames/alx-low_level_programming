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

	prev = malloc(sizeof(dlistint_t));
	if (!prev)
	{
		perror("failed");
		return (NULL);
	}
	prev->n = n;
	prev->prev = NULL;
	if (!*head)
	{
		prev->next = NULL;
		*head = prev;
		return (prev);
	}

	current = *head;

	prev->next = current;
	*head = prev;
	return (prev);
}
