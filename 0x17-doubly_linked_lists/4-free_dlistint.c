#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    dlistint_t *current;
    dlistint_t *previous;
    if (!head)
    {
        return;
    }
    current = head;
    while (current)
    {
        previous = current;
        current =current->next;
        free(previous);
    }
}
