#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to char
 * @src: pointer to char
 * @n:int
 * Return: pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
