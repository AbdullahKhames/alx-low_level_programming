#include "variadic_functions.h"
#include <string.h>

/**
 * print_numbers - prints
 * @separator: sep
 * @n: number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list lptr;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(lptr, n);

	while (i--)
		printf("%d%s", va_arg(lptr, int), i ? (separator ? separator : "") : "\n");
	va_end(lptr);

}
