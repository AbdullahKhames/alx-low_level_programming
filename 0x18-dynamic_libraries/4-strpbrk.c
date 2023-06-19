#include "main.h"

/**
 * _strpbrk - finds first occuerence of second in first
 * @s: first
 * @accept: second
 * Return: pointer to char
 */

char *_strpbrk(char *s, char *accept)
{
	int index1, index2;
	char *cptr;

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (accept[index2] == s[index1])
			{
				cptr = &s[index1];
				return (cptr);
			}
		}
	}
	return (0);
}
