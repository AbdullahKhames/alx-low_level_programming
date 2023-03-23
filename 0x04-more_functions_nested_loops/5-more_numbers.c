#include "main.h"

/**
 * more_numbers - function that print numbers
 * Description: function print numbers till 14 to std output
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			_putchar(j+48);
		}
		_putchar('\n');
	}
}
