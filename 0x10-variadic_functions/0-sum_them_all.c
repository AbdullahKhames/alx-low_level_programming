#include "variadic_functions.h"

/**
 * sum_them_all - sums
 * @n: number
 * Return: sum
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list lptr;
	unsigned int index = 0, sum = 0;

	va_start(lptr, n);

	for (; index < n; index++)
	{
		sum += va_arg(lptr, int);
	}

	va_end(lptr);
	return (sum);
}
