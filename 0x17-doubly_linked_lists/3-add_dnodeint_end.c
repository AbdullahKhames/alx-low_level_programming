#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *current;
    dlistint_t *previous;
    dlistint_t *new;

    if (!head)
    {
        return NULL;
    }

    if (!(*head))
    {
        return create_first_node(head, n);
    }
    new = malloc(sizeof(dlistint_t));
    new->n = n;
    current = *head;
    while (current)
    {
        previous = current;
        current = current->next;
    }

    previous->next = new;
    new->prev = previous;
    new->next = NULL;

    return (*head);
}
