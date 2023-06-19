#include "main.h"

/**
 * _strlen - function that calculates the length of a given string
 * @s: the string to be calculated its length
 * Description: function to calculate the length of agiven string
 * Return: returns the length of a given string or return -1 if null
 */

int _strlen(char *s)
{
	int length = 0, i;

	i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
