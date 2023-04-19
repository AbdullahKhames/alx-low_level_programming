#include "function_pointers.h"

/**
 * array_iterator - function to print all elements
 * @array: elements stored here
 * @size: size of arr
 * @action: functioin to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);

	}
}

