#include "lists.h"

/**
 * _putchar - function to print
 * @c: the printed char
 * Return: the number of writen chars
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}

int _puts (char *s)
{

	int i = 0;
	if (!s)
		return (0);

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
