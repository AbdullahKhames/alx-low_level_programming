#include "main.h"

/**
 * _memset function that does memeset
 * @s: pointer to char
 * @b: normal char
 * @N: the number of times to print
 * Return: returns pointer to char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}
