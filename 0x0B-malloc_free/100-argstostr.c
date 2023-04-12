#include "main.h"
/**
 * _strlen - function to get str length
 * @str: string to get length
 * Return: returns length iof str
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * argstostr - function to print args
 * @ac: counter
 * @av: values
 * Return: pointer to char
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, count = 0, c = 0;
	char *cptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++, count++)
		count += _strlen(av[i]);

	cptr = malloc(count * sizeof(char) + 1);

	if (cptr == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (; av[i][j] != '\0'; j++, c++)
		{
			cptr[c] = av[i][j];
		}
		cptr[c] = '\n';
		c++;
	}
	cptr[c] = '\0';
	return (cptr);
}
