#include "main.h"

/**
 * print_line - function that prints line to stdput
 * @n: rthe number of times the n should be printed
 * Description: function that prints to stream
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 0 ; i < n ; i++)
		{
			_putchar(95);
		}
	}
}
