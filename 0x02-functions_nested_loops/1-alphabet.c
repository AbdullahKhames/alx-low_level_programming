#include "main.h"

/**
 *print_alphabet - function
 *
 *Description : 'new function to print alphabet'
 *
 *Return : returns the alphabet
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
