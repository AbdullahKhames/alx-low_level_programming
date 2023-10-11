#include "search_algos.h"
/**
 * min - function to get minimn
 * @a: first arg
 * @b: second arg
 * Return: min
*/
int min(int a, int b){
    if(b>a)
      return a;
      else
      return b;
}

/**
 * jump_search - to search array
 * @array: array to be searched
 * @size: size of array
 * @value: vaalue to be searched for
 * Return: the index fi found -1 if not
*/
int jump_search(int *array, size_t size, int value)
{
    int prev = 0, len = size, step = sqrt(len);

    if (!array)
    {
        return (-1);
    }

    while (array[min(step, len) - 1] < value)
    {
        printf("Value checked array[%d] = [%d]\n", prev, prev);
        prev = step;
        step += sqrt(len);
        if (prev >= len)
        {
            return (-1);
        }
        
    }
    printf("Value found between indexes [%d] and [%d]\n", prev, step);    
    while (array[prev] < value)
    {
        prev++;
        if (prev == min(step, len))
        {
            return (-1);
        }
    }
    if (array[prev] == value)
        return prev;
 
    return -1;
}
