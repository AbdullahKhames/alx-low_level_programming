#include "main.h"

/**
 * more_numbers - function that print numbers
 * Description: function print numbers till 14 to std output
 */
void more_numbers(void)
{
	int i;
	int j;
	int x;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			x = j;
			if (j > 9)
			{
				putchar(49);
				x = j % 10;
			}

			putchar(x + 48);
		}
	putchar('\n');
	}
}
