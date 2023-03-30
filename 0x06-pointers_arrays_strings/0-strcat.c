#include "main.h"

/**
 * _strcat - a function to concat
 * @dest: the string they concat to
 * @src: the string they concat
 * Retrun: the new string after concat
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
