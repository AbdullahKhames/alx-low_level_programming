#include "lists.h"

/**
 * len_dlist - function to find length
 * @h: list
 * Return: size
 */
size_t len_dlist(const dlistint_t *h)
{
        size_t len = 0;
        const dlistint_t *current;

        if (!h)
                return 0;
        current = h;
        while (current)
        {
                len++;
                current = current->next;
        }
        return (len);
}

/**
 * print_dlistint - function to print dlist
 * @h: header of theat dlist
 * Return: the size printed
 */

size_t print_dlistint(const dlistint_t *h)
{       
	const dlistint_t *current;
	int len = (len_dlist(h));
	if (!h)
		return 0;
	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}

	return (len);
}
