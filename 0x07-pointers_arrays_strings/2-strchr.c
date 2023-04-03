#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to check
 * @c: char to be checked
 * Return: pointer to the first occurrence of the character c in the
 * string s or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
