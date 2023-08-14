#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *current;
    const dlistint_t *previous;

    size_t count = 0;
    if (!h)
    {
        return 0;
    }
    current = h;

    previous = current->prev;
    while (previous)
    {
        previous = previous->prev;
        if (previous)
        {
            current = current->prev;
        }
    }

    while (current)
    {
        printf("%d\n", current->n);
        count++;
        current = current->next;
    }
    
    return count;
}
