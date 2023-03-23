#include "main.h"

/**
 * print_diagonal - print diagonally
 * @n: the number to print
 * Descripyion: print diagonally
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	i = 0;
	while (i < n)
	{
		for (j = 0 ; j < i ; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	
}
