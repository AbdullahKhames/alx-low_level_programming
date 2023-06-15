#include "lists.h"

int main(void)
{
	dlistint_t *l = malloc(sizeof(dlistint_t));
	dlistint_t *i = malloc(sizeof(dlistint_t));
	dlistint_t *s = malloc(sizeof(dlistint_t));

	l->n = 5;
	i->n = 6;
	s->n = 7;
	l->prev = NULL;
	l->next = i;
	i->prev = l;
	i->next = s;
	s->prev = l;
	s->next = NULL;
	printf("%ld\n",print_dlistint(l));
	return (0);
}
