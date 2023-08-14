#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

    dlistint_t *current;
    unsigned int i = 0;

    if (!head)
    {
        return NULL;
    }
    current = head;
    while (current)
    {
        if (index == i)
        {
            return current;
        }
        i++;
        current = current->next;
    }
    
    return (NULL);
}
