/* #include "main.h"

int main(void)
{
    dlistint_t *ls = NULL;
    dlistint_t *idxed;
    int x;
    add_dnodeint(&ls, 50);
    add_dnodeint(&ls, 5);
    add_dnodeint(&ls, 70);
    add_dnodeint(&ls, 20);
    add_dnodeint(&ls, 2800);
    add_dnodeint(&ls, 90);
    add_dnodeint_end(&ls, 90);
    add_dnodeint_end(&ls, 5000);
    idxed = get_dnodeint_at_index(ls, 7);

    x= print_dlistint(ls);
    printf("%d\n", x);
    printf("%d\n", idxed->n);

    free_dlistint(ls);
    return 0;

}
 */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

size_t _print_dlistint_backward(const dlistint_t *h);

/**
 * _create_dlist - Create a list
 *
 * @n: Number of elements
 *
 * Return: A pointer to the first element of the created list
 */
dlistint_t *_create_dlist(unsigned int n, ...)
{
	va_list args;
	dlistint_t *list;
	dlistint_t *tmp;
	dlistint_t *prev;
	unsigned int i;
	int nb;

	va_start(args, n);
	prev = tmp = list = NULL;
	i = 0;
	while (i < n)
	{
		nb = va_arg(args, int);
		tmp = malloc(sizeof(*tmp));
		if (!tmp)
			return (NULL);
		tmp->n = nb;
		tmp->next = NULL;
		tmp->prev = prev;
		if (!list)
			list = tmp;
		if (prev)
			prev->next = tmp;
		prev = tmp;
		++i;
	}
	va_end(args);
	return (list);
}

/**
 * _free_dlistint - Free a list
 *
 * @list: A pointer to the first element of a list to free
 */
void _free_dlistint(dlistint_t *list)
{
	if (list)
	{
		_free_dlistint(list->next);
		free(list);
	}
}


/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}
