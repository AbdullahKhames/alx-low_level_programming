#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - function to add a node at the beginning of a doubly linked list
 * @head: double pointer to the head of the list
 * @n: value to add
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *new_node;

        if (!head)
                return NULL;

        new_node = malloc(sizeof(dlistint_t));
        if (!new_node)
        {
                perror("Failed to allocate memory");
                return NULL;
        }

        new_node->n = n;
        new_node->prev = NULL;
        new_node->next = *head;

        if (*head)
                (*head)->prev = new_node;

        *head = new_node;

        return new_node;
}
int main(void)
{
	dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
