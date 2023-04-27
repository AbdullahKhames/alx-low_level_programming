#include "lists.h"


/**
 * _strlen - func
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	if (!s)
		return (0);

	while (s[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}

/**
 * print_list - prints list
 * @h: the list to print
 * Return: the number of bnodes
 */

size_t print_list(const list_t *h)
{

	const list_t *temp = h;
	size_t i = 0;

	while (temp != NULL)
	{
		printf("[%d] %s\n", _strlen(temp->str), temp->str ? temp->str : "(nil)");
		temp = temp->next;
		i++;
	}
	return (i);
}
