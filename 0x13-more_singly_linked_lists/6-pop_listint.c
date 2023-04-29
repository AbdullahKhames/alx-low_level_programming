#include "lists.h"

/**
 * pop_listint - function to pop head of a list
 * @head: pointer to  head
 * Return: the n data of the node deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int x;

	if (!head)
		return (0);

	current = *head;

	x = current->n;
	if (current->next)
		*head = current->next;
	free(current);
	return (x);
}
