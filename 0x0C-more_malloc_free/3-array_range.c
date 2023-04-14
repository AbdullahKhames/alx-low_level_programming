#include "main.h"

/**
 * array_range - func
 * @min: min
 * @max: max
 * Return: return
 */

int *array_range(int min, int max)
{
	int *iptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	iptr = malloc(sizeof(int) * size);

	if (iptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		iptr[i] = min++;

	return (iptr);
}
