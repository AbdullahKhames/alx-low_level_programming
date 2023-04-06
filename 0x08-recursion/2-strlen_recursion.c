#include "main.h"

/**
 * _strlen_recursion - function counts the lenght of str
 * @s: string to get it length
 * Return: returns lenght of str
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		length += _strlen_recursion(s + 1) + 1;
	}
	return length;
}
