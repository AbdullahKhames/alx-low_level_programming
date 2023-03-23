#include "main.h"

/**
 * print_most_numbers - function that prints most numbers
 * Description: function that prints numbers except for 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 2 + 48 || i == 4 + 48)
			continue;
		_putchar(i+48);
	}
	_putchar('\n');
}
