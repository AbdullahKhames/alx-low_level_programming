#include "main.h"

/**
 * swap_int - function to swap int
 * @a: first argument to be swapped
 * @b: second arg
 * Description: function that swaps int
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
