#include "main.h"

/**
 * _strdup - func
 * @str: str
 * Return: returns null
 */

char *_strdup(char *str)
{
	char *cptr;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	cptr = (char*) malloc(length * sizeof(char) + 1);
	if (cptr == NULL)
		return (NULL);

	for (i = 0;i< length; i++)
		cptr[i] = str[i];
	cptr[len] = '\0';
	return (cptr);
}
