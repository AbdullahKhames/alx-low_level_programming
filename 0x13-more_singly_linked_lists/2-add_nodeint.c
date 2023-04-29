#include "lists.h"

/**
 * add_nodeint - function that creates and adds node
 * to the begining
 * @head: a pointer to the head pointer
 * @n: the int to create node with
 * Return: a pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
