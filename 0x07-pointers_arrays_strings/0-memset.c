#include "main.h"

/**
 * _memset - function that does memeset
 * @s: pointer to char
 * @b: normal char
 * @n: the number of times to print
 * Return: returns pointer to char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (n > 0)
	{
		s[x] = b;
		x++;
		n--;
	}
	return (s);
}
