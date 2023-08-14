#include "lists.h"
/**
 * getNewNode - gets new node
 * @new_node: new_node
 * Return: new node
 */
dlistint_t *getNewNode()
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if(!new_node)
	{
		perror("failed malloc");
		return (NULL);
	}
	printf("new node vreasted");
	return (new_node);
}
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
	dlistint_t *prev;
	dlistint_t *new_node;
	unsigned int counter = 0;

	if (!h)
		return (NULL);
	new_node = getNewNode();
	new_node->n = n;

	if (!*h && idx == 0)
	{
			printf("in f:");
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
	}
	else
	{
			printf("in else");
		current = *h;
		prev = current->prev;
		while (current)
		{
			printf("in while");
			if (counter == idx)
			{
				new_node->next = current;
				new_node->prev = prev;
				prev->next = new_node;
				current->prev = new_node;
				break;
			}
			counter++;
			current = current->next;
		}
	}
	if (idx > counter)
		return (NULL);
	return (new_node);
}
