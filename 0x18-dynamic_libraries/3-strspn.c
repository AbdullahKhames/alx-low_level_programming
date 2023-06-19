#include "main.h"

/**
 * _strspn - function to find string in another
 * @s: to be searched
 * @accept: to search for
 * Return: return number of chars in string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
