#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given index
 * @head: pointer to the linked list
 * @idx: index to add the new node
 * @n: the data to be stored in node
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new_node;
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	current = *head;

	while (current != NULL)
	{
		if (x == idx - 1)
			break;
		current = current->next;
		x++;
	}
	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
