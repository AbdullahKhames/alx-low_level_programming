#include "main.h"

/**
 * create_array - function creates array
 * @size: int size
 * @c: char to  print
 * Return: null if fails and pointer to array in success
 */

char *create_array(unsigned int size, char c)
{
	char *cptr;

	cptr = (char*) malloc(size * sizeof(char));
	if (size == 0 || cptr == 0)
		return (0);

	while (size)
	{
		cptr[size] = c;
		size--;
	}
	return (cptr);
}
