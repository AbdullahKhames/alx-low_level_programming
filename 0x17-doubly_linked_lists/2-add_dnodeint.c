#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));

    if (!head || !new)
    {
        return NULL;
    }
    if (!(*head))
    {
        free(new);
        return create_first_node(head, n);
    }
    else{
        new->next = *head;
        (*head)->prev = new;
    }
    new->prev = NULL;
    new->n = n;
    (*head) = new;

    return *head;
}

dlistint_t *create_first_node(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));

    if (!head || !new)
    {
        return NULL;
    }
    new->next = NULL;
    new->prev = NULL;
    new->n = n;
    (*head) = new;
    return *head;
}
