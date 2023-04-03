#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagsumss
 *
 * @a: first arg
 *
 * @size: second arg
 */

void print_diagsums(int *a, int size)
{
	int index1;
	int x = 0, y = 0;

	for (index1 = 0; index1 < size; index1++)
	{
		x += a[index1];
		y += a[size - index1 - 1];
		a += size;
	}
	printf("%d, ", x);
	printf("%d\n", y);
}
