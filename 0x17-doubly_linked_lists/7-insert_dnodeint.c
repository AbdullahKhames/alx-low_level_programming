#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *before;
    dlistint_t *current;
    dlistint_t *new;

    unsigned int i = 0;
    unsigned int count = 0;
    if (!h)
    {
        return NULL;
    }
    if (!(*h))
    {
        return create_first_node(h, n);
    }

    if (idx == 0)
    {
        return add_dnodeint(h, n);
    }
    current = *h;
    while (current)
    {
        count++;
        current = current->next;
    }
    if (idx == count)
    {
        return add_dnodeint_end(h, n);
    }
    if (idx > count)
    {
        return NULL;
    }
    
    new = malloc(sizeof(dlistint_t));
    current = *h;
    new->n = n;
    while (current)
    {
        if (i == idx)
        {
            current->prev = new;
            new->next = current;
            if (before)
            {
                before->next = new;
                new->prev = before;
            }
            else{
                new->prev = NULL;
            }
            return new;
        }
        i++;
        current = current->next;
        before = current->prev;
    }
    free(new);
    return NULL;

}
