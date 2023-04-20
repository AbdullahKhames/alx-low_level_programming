#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: format
 */

void print_all(const char * const format, ...)
{
	char *temp;
	int index = 0, point;
	va_list lptr;

	va_start(lptr, format);

	while (format != NULL && format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(lptr, int));
				point = 0;
				break;
			case 'i':
				printf("%i", va_arg(lptr, int));
				point = 0;
				break;
			case 'f':
				printf("%f", va_arg(lptr, double));
				point = 0;
				break;
			case 's':
				temp = va_arg(lptr, char *);
				if (temp == NULL)
					temp = "(nil)";
				printf("%s", temp);
				point = 0;
				break;
			default:
				point = 1;
				break;
		}
		if (format[index + 1] != '\0' && point == 0)
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(lptr);
}
