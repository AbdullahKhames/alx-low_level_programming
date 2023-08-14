#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *current;
    const dlistint_t *previous;

    int count = 0;

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
        count++;
        current = current->next;
    }
    return count;
    
}
