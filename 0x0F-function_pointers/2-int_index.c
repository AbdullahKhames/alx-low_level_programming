#include "function_pointers.h"

/**
 * int_index - function
 * @array: array
 * @size: size
 * @cmp: function that compares
 * Return: returns int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
