#include "variadic_functions.h"

/**
 * print_strings - print
 * @separator: sep
 * @n: n
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index = n;
	va_list lptr;
	char *s;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(lptr, n);

	while (index--)
		printf("%s%s", (s = va_arg(lptr, char *)) ? s : "(nil)"
				, index ? (separator ? separator : "") : "\n");
	va_end(lptr);
}
