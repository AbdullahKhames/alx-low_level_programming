#include "main.h"

void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8;
	int counter = 0;

	while (size)
	{
		if (n &1l << --size)
		{
			_putchar('1);
			counter++;
		}
		else if (counter)
			_putchar ('0');
	}
	if (!counter)
		_putchar('0');
}
