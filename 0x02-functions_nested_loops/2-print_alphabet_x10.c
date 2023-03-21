#include "main.h"

/**
 *print_alphabet_x10 - function
 *
 *Description : 'new function to print alphabet'
 *
 *Return : returns the alphabet
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0 ; i < 10 ; i++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
