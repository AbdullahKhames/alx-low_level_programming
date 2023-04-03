#include "main.h"

/**
 * _strstr - finds first occurence of needle in haystack
 * @haystack: first arg
 * @needle: search string
 * Return: returns occurecnce of second in first
 */
char *_strstr(char *haystack, char *needle)
{
	int index1, index2;
	char *cptr;

	for (index1 = 0; haystack[index1] != '\0'; index1++)
	{
		for (index2 = 0; needle[index2] != '\0'; index2++)
		{
			if (haystack[index1] == needle[0])
			{
				if (haystack[index2] == needle[index2])
				{
					index2++;
				}
				else
					break;
			}
		}
		if (needle[index2])
		{
			index1++;
			j = 0;
		}
		else
			return (haystack + index1);
	}
	return (0);
}
