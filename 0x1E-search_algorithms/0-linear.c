#include "search_algos.h"

/**
 * linear_search - function to implement linear search
 * @array: array to be searched
 * @size: its size
 * @value: value to be searched for
 * Return: return int index if found
 * zero if not found
*/
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (!array)
    {
        return (-1);
    }
    
    for (; i < size; i++)
    {
        if (array[i] == value)
        {
            return (i);
        }
        
    }
    return (-1);
}
