#include "lists.h"

/**
 * free_list - function to free the linked list
 * @head: the list to free
 */

void free_list(list_t *head)
{

	list_t *temp1 = head;
	list_t *temp2;
	
	if (!head)
		return;

	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		free(temp1->str);
		free(temp1);
		temp1 = temp2;
	}
}
