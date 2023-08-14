#include "lists.h"
/**
 * add_dnodeint_end - func to add node
 * @head: head of list
 * @n: number to add
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *next;

	if (!head)
		return (NULL);
	if (!(*head))
	{
		current = malloc(sizeof(dlistint_t));
		if (!current)
		{
			fprintf(stderr, "Failed to allocate memory\n");
			return (NULL);
		}
		current->n = n;
		current->prev = NULL;
		current->next = NULL;
		*head = current;
		return (current);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	next = malloc(sizeof(dlistint_t));
	if (!next)
	{
		perror("failed malloc");
		return (NULL);
	}
	next->n = n;
	next->next = NULL;
	next->prev = current;
	current->next = next;
	return (next);

}
