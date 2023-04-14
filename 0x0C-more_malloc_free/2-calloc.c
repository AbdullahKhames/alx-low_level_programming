#include "main.h"

/**
 * _memset - mem
 * @s: arg
 * @b: arg
 * @n: arg
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}


/**
 * _calloc - calloc
 * @nmemb: agr
 * @size: arg
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cptr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	cptr = malloc(sizeof(int) * nmemb);

	if (cptr == 0)
		return (NULL);
	_memset(cptr, 0, sizeof(int) * nmemb);

	return (cptr);
}
