#include "main.h"

/**
 * print_square - function that prints sqaures
 * @size: the size of squares
 * Description: the size of square is printed size number of times*/

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
